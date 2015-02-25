#include <JeeLib.h>
#include "SpinPunchPrinter.h"

PortI2C motorsPort (1);
DeviceI2C motorsPlug (motorsPort, 0x26);
// SpinPunchPrinter printer;

void setup()
{
  // printer = SpinPunchPrinter(motorsPlug);
}

void loop()
{
}

