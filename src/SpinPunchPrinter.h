#include "McpOut.h"

#ifndef SPINPUNCHPRINTER_H
#define SPINPUNCHPRINTER_H

class SpinPunchPrinter {

  private:

    struct Position {
      int column;
      int row;
      char character;
    } position;

    static const int COLUMNS = 80;
    static const int STEPS_PER_ROW = 10;
    static const int STEPS_PER_COLUMN = 10;
    const McpOut& mcpOut;

    void spin(char letter);
    void punch();
    void column(int column);
    void row(int rows);
    void advance();
    void wait() { delay(2); }

  public:

    SpinPunchPrinter(const McpOut& m) : mcpOut(m) {}
    void backspace();
    void newline();
    void character(char);

};

#endif
