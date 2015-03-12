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
  printer.print('A');
  delay(1000);
  printer.print('Z');
  // Serial.println(millis());
  delay(1000);
}
