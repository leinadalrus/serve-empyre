#pragma once
#include "SutskeverStyle.h"
#include <models/sutskever.h>

using namespace marian;

Ptr<EncoderBase> EncoderFactory::construct() {
  auto encoded = New<SutskeverEncoder>(this->options_);

  if (this->options_->get<std::string>("type") == "sutskever")
    encoded = New<SutskeverEncoder>(this->options_);

  return encoded;
}

Ptr<DecoderBase> DecoderFactory::construct() {
  auto decoded = New<SutskeverDecoder>(this->options_);

  if (this->options_->get<std::string>("type") == "sutskever")
      decoded = New<SutskeverDecoder>(this->options_);

  return decoded;
}

Ptr<ModelBase> by_type(std::string type, Ptr<Options> options) {
  auto modem = models::encoder_decoder()(options)
      .push_back(models::encoder()("type", "sutskever"))
      .push_back(models::decoder()("type", "sutskever"))
      .construct();

  if (type == "sutskever") {
    modem = models::encoder_decoder()(options)
      .push_back(models::encoder()("type", "sutskever"))
      .push_back(models::decoder()("type", "sutskever"))
      .construct();
  }

  return modem;
}