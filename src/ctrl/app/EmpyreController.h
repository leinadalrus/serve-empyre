#include "../ControllerBase.h"
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <imgui/imgui.h>
#include <iostream>

#ifndef CD162A49_5B77_49A6_B9B7_D20510BAF53B
#define CD162A49_5B77_49A6_B9B7_D20510BAF53B

class EmpyreController : public ControllerBase {
public:
  EmpyreController(const ControllerBase &ctl) : controller(ctl) {}
  ~EmpyreController();

  int handle();
  void exec();

private:
  const ControllerBase controller;
  const int screenWidth = 640;
  const int screenHeight = 480;
  const char *appTitle = "Empyre";
};

#endif /* CD162A49_5B77_49A6_B9B7_D20510BAF53B */
