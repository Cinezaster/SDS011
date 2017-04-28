#pragma once

/* SDS011 library by toon nelissen
 */
#include "Particle.h"

class SDS011
{
public:
  SDS011();
  void begin();
  int read(float *p25, float *p10);
  void sleep();
  void wakeup();
};
