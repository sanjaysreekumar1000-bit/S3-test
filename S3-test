#include <ESP32Servo.h>

Servo myServo;

const int SERVO_PIN = 4;   // choose a PWM-capable pin

void setup() {
  Serial.begin(115200);
  Serial.println("ESP32-S3 Servo Test Started");

  // Attach servo to pin
  myServo.attach(SERVO_PIN);

  // Move to initial position
  myServo.write(90);
  delay(500);
}

void loop() {
  Serial.println("Sweeping → 0 → 180");
  
  // Sweep forward
  for (int pos = 0; pos <= 180; pos++) {
    myServo.write(pos);
    delay(10);
  }

  // Sweep backward
  for (int pos = 180; pos >= 0; pos--) {
    myServo.write(pos);
    delay(10);
  }

  delay(500);
}
