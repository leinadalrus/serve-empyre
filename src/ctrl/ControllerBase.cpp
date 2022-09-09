#include "ControllerBase.h"

EmpyreController::EmpyreController() = default;

EmpyreController::~EmpyreController() {
  handler.~EmpyreHandler();
}