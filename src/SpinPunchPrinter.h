#include <Arduino.h>
#include "McpOut.h"
#include "Stepper.h"

#ifndef SPINPUNCHPRINTER_H
#define SPINPUNCHPRINTER_H

class SpinPunchPrinter {

  private:

    McpOut& mcpOut;
    static byte daisyStepperSequence[];
    static String daisyCharacterSequence;
    static int stepperSpeed;
    Stepper daisy;

    char currentCharacter;

    void spin(char letter);
    void punch();

  public:

    SpinPunchPrinter(McpOut& m) : mcpOut(m), daisy(daisyStepperSequence) {
      // Think we're going to have to use some kind of optical sensor
      // to figure this out.
      currentCharacter = 'A';
    }

    void print(char);

};

#endif
