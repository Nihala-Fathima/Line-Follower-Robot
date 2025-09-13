// Line Follower Robot – Arduino UNO + 2 IR Sensors

// Motor pins
const int motorLeftForward  = 2;
const int motorLeftBackward = 3;
const int motorRightForward = 4;
const int motorRightBackward = 5;

// IR sensor pins
const int irLeft = 8;
const int irRight = 9;

void setup() {
  // Set motor pins as output
  pinMode(motorLeftForward, OUTPUT);
  pinMode(motorLeftBackward, OUTPUT);
  pinMode(motorRightForward, OUTPUT);
  pinMode(motorRightBackward, OUTPUT);

  // Set IR sensor pins as input
  pinMode(irLeft, INPUT);
  pinMode(irRight, INPUT);
}

void loop() {
  // Read IR sensor values
  int leftSensor = digitalRead(irLeft);
  int rightSensor = digitalRead(irRight);

  // IR sensor logic: 0 = black, 1 = white

  if (leftSensor == 0 && rightSensor == 0) {
    // Both on black line – move forward
    moveForward();
  } 
  else if (leftSensor == 0 && rightSensor == 1) {
    // Left on black, right on white – turn left
    turnLeft();
  } 
  else if (leftSensor == 1 && rightSensor == 0) {
    // Right on black, left on white – turn right
    turnRight();
  } 
  else {
    // Both on white – stop or search
    stopMotors();
  }
}

// ======= Motor control functions =======

void moveForward() {
  digitalWrite(motorLeftForward, HIGH);
  digitalWrite(motorLeftBackward, LOW);
  digitalWrite(motorRightForward, HIGH);
  digitalWrite(motorRightBackward, LOW);
}

void turnLeft() {
  digitalWrite(motorLeftForward, LOW);
  digitalWrite(motorLeftBackward, LOW);
  digitalWrite(motorRightForward, HIGH);
  digitalWrite(motorRightBackward, LOW);
}

void turnRight() {
  digitalWrite(motorLeftForward, HIGH);
  digitalWrite(motorLeftBackward, LOW);
  digitalWrite(motorRightForward, LOW);
  digitalWrite(motorRightBackward, LOW);
}

void stopMotors() {
  digitalWrite(motorLeftForward, LOW);
  digitalWrite(motorLeftBackward, LOW);
  digitalWrite(motorRightForward, LOW);
  digitalWrite(motorRightBackward, LOW);
}
