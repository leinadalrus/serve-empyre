#include "HandlerBase.h"

MiniAppHandler::MiniAppHandler() = default;

MiniAppHandler::~MiniAppHandler() {
  MiniAppHandler *handler;
  delete [] handler;
  handler = nullptr;
}

// void EmpyreHandler::Handle() {}