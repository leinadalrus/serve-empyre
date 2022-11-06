#include <crow_all.h> // need boost library
#include <jsoncpp/include/json/json.h>
#include <string.h>

#include "ControllerBase.h"

#ifndef MODULE_ROUTING_COMPONENT_H
#define MODULE_ROUTING_COMPONENT_H

class ModuleRoutingComponent : private ControllerBase {
public:
  ModuleRoutingComponent();
  ModuleRoutingComponent(HandlerBase handler) : router(handler) {}
  ~ModuleRoutingComponent();

  void Handle();

private:
  crow::Router router;
  std::string controllerName;
  std::string actionName;
  int actionID;
};

#endif
