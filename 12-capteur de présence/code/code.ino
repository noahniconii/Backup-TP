const int LED = 13;
const int motionSensor = 2;

void setup() {
  pinMode(LED, OUTPUT);
  pinMode(motionSensor, INPUT);
}

void loop() {
  int sensorValue = digitalRead(motionSensor);
  
  if (sensorValue == HIGH) {
    digitalWrite(LED, HIGH);
  } else {
    digitalWrite(LED, LOW);
  }
}
