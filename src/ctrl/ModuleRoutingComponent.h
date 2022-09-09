#include <lib/crow_all.h>
#include <jsoncpp/include/json/json.h>
#include <string>

#include "ControllerBase.h"

#ifndef MODULE_ROUTING_COMPONENT_H
#define MODULE_ROUTING_COMPONENT_H

class ModuleRoutingComponent: private ControllerBase {
public:
  ModuleRoutingComponent();
  ModuleRoutingComponent(MiniAppHandler handler): router(handler) {}
  ~ModuleRoutingComponent();

  void Handle();

private:
  MiniAppRouter router;
  std::string controllerName;
  std::string actionName;
  int actionID;
};

class MiniAppRouter: public ModuleRoutingComponent {
public:
  MiniAppRouter();
  MiniAppRouter(MiniAppHandler handler): handler(handler) {}
  ~MiniAppRouter();
private:
  MiniAppHandler handler;
};

#endif
