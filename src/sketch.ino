#include <JeeLib.h>
#include "McpOut.h"
#include "SpinPunchPrinter.h"

PortI2C motorsPort (1);
DeviceI2C motorsDevice (motorsPort, 0x26);
McpOut mcpOut (motorsDevice);
SpinPunchPrinter printer (mcpOut);

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  printer.print('S');
  printer.print('T');
  printer.print('E');
  printer.print('P');
  printer.print('H');
  printer.print('E');
  printer.print('N');
  delay(1000);
}
