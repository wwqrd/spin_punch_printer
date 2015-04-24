#include "stepper.h"

Stepper::Stepper(const byte s[]) : sequence(s) {
  step = 0;
}

byte Stepper::forward() {
  step = step + 1;
  if(step > 3) { step = 0; }
  return sequence[step];
}

byte Stepper::backward() {
  step = step - 1;
  if(step < 0) { step = 3; }
  return sequence[step];
}
