#include <Servo.h>

//const int ServoPin = 7;
Servo servo;

void setup() {
  // put your setup code here, to run once:
  servo.attach(7);
  servo.write(0);
  Serial.begin(9600);
  Serial.println("give an angle");
  
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available()){
    int angle = Serial.parseInt();
    Serial.println(angle);
    servo.write(angle);
    Serial.println("give an angle");
  }
  
  delay(50);
}
