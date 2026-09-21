int trig = 7;
int echo = 6;
int distance;
long Time;

void setup() {
  // put your setup code here, to run once:
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(trig, 0);
  delayMicroseconds(2);

  digitalWrite(trig, 1);
  delayMicroseconds(10);
  digitalWrite(trig, 0);

  Time = pulseIn(echo, HIGH);
  distance = Time * 0.034 /  2;

  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");
}