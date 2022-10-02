#include "../models/command/HandlerBase.h"
#include <C:\\Users\\danie\\libs\\boost_1_65_1\\boost\\algorithm\\string\\config.hpp>
#include <C:\\Users\\danie\\libs\\boost_1_65_1\\boost\\algorithm\\string\\predicate.hpp>
#include <crow_all.h>

#ifndef CONTROLLER_BASE_H
#define CONTROLLER_BASE_H

class ControllerBase {
public:
  ControllerBase(HandlerBase handler) : handler(handler) {
    CROW_ROUTE(app, "/")([]() { return "$html$"; });

    app.port(18080).multithreaded().run();
  }

  ~ControllerBase();

private:
  HandlerBase handler;
  crow::SimpleApp app;
};

#endif