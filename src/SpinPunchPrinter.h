#include <JeeLib.h>

#ifndef SPINPUNCHPRINTER_H
#define SPINPUNCHPRINTER_H

class SpinPunchPrinter {

  private:

    struct Position {
      byte column;
      byte row;
      char character;
    } position;

    static const int COLUMNS = 80;
    const DeviceI2C& motorsPlug;

    void spin(char letter);
    void punch();
    void column(int column);
    void row(int rows);
    void advance();

  public:

    SpinPunchPrinter(const DeviceI2C& p) : motorsPlug(p) {}
    void backspace();
    void newline();
    void character(char);

};

#endif
