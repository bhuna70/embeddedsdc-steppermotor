#include <Stepper.h>
const int stepsPerRevolution = 2048;
int motSpeed=10;
Stepper myStepper(stepsPerRevolution,8,9,10,11);
int stepCount = 0;
void setup() {
  myStepper.setSpeed(motSpeed);
}


void loop() {
  myStepper.step(stepsPerRevolution);
  delay(500);
  myStepper.step(stepsPerRevolution);
  delay(500);

}
