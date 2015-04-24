#include <Arduino.h>
#include <JeeLib.h>
#include "mcp_out.h"
#include "spin_punch_printer.h"

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
