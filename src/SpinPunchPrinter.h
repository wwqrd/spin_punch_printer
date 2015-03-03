#include <Arduino.h>
#include "McpOut.h"
#include "Stepper.h"

#ifndef SPINPUNCHPRINTER_H
#define SPINPUNCHPRINTER_H

class SpinPunchPrinter {

  private:

    const McpOut& mcpOut;
    static byte daisySequence[];
    Stepper daisy;

    char character;

    void spin(char letter);
    void punch();

  public:

    SpinPunchPrinter(const McpOut& m) : mcpOut(m), daisy(daisySequence) {}
    void print(char);

};

#endif
