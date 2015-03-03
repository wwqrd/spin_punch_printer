#include <Arduino.h>

#ifndef STEPPER_H
#define STEPPER_H

// 1010
// 0110
// 0101
// 1001
//
// 1100
// 0011
// 1100
// 0011
//
// = {0x0A, 0x06, 0x05, 0x09};

class Stepper {
  private:
    int step;
    const byte *sequence;

  public:
    byte forward();
    byte backward();
    Stepper(const byte s[]);
};

#endif
