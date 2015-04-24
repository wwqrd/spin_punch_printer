#include "spin_punch_printer.h"

byte SpinPunchPrinter::daisyStepperSequence[] = {0x0A, 0x06, 0x05, 0x09};
String SpinPunchPrinter::daisyCharacterSequence = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
int SpinPunchPrinter::stepperSpeed = 50;

void SpinPunchPrinter::spin(char targetCharacter) {
  // turn to character
  int currentPosition = daisyCharacterSequence.indexOf(currentCharacter);
  int targetPosition = daisyCharacterSequence.indexOf(targetCharacter);
  int difference = currentPosition - targetPosition;

  if(difference > 0) {
    for(int i = 0; i < abs(difference); i++) {
      delay(stepperSpeed);
      byte next = daisy.forward();
      mcpOut.send(next);
    }
  }

  if(difference < 0) {
    for(int i = 0; i < abs(difference); i++) {
      delay(stepperSpeed);
      byte next = daisy.backward();
      mcpOut.send(next);
    }
  }

  currentCharacter = targetCharacter;
}

void SpinPunchPrinter::punch() {
  // punch the daisy solenoid
}

void SpinPunchPrinter::print(char character) {
  spin(character);
  // turn to position
  // punch letter
  // go to next space
  delay(250);
}
