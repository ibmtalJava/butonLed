#include "motorControl.h"
MotorControl fanMotor(3,2);
MotorControl conMotor(5,4);
void setup() {
  fanMotor.setup();
  conMotor.setup();
  fanMotor.setMod(0);
  conMotor.setMod(1);
}
void loop() {
  fanMotor.attach();
  conMotor.attach();
}
