
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
