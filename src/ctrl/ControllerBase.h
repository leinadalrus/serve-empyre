#include "../models/command/HandlerBase.h"
#include <lib/crow_all.h>

#ifndef CONTROLLER_BASE_H
#define CONTROLLER_BASE_H

class ControllerBase {
public:
  ControllerBase(HandlerBase handler): handler(handler) {
    CROW_ROUTE(APP, "/")([](){
      return "$html$";
    });

    app.port(18080).multithreaded().run();
  }
  ~ControllerBase();
private:
  HandlerBase handler;
  crow::SimpleApp app;
};

#endif