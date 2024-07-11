void loop() {
value_A0 = analogRead(IN_A0); // reads the analog input from the IR distance sensor
Serial.print(" Analogue = "); 
Serial.print(value_A0);
}










void loop() {
  readValue = analogRead(IN_A0);
    if (readValue < 100) {
        analogWrite(pwmPin, 255); //on défini la vitesse du moteur
    }
    else if (readValue >= 100 && readValue < 200){
        analogWrite(pwmPin, 232); //on défini la vitesse du moteur
    }
    else if (readValue >= 200 && readValue < 300) {
        analogWrite(pwmPin, 203); //on défini la vitesse du moteur
    }
    else if (readValue >= 300 && readValue < 400) {
        analogWrite(pwmPin, 174); //on défini la vitesse du moteur
    }
    else if (readValue >= 400 && readValue < 500) {
        analogWrite(pwmPin, 145); //on défini la vitesse du moteur
    }
    else if (readValue >= 500 && readValue < 600) {
        analogWrite(pwmPin, 116); //on défini la vitesse du moteur
    }
    else if (readValue >= 700 && readValue < 800) {
        analogWrite(pwmPin, 87); //on défini la vitesse du moteur
    }
    else if (readValue >= 800 && readValue < 900) {
        analogWrite(pwmPin, 58); //on défini la vitesse du moteur
    }
    else if (readValue >= 900 && readValue < 1024) {
        analogWrite(pwmPin, 29); //on défini la vitesse du moteur
    }
    digitalWrite(4,HIGH);
    delay(t);
    digitalWrite(4,LOW);
    delay(t);
    digitalWrite(5,HIGH);
    delay(t);
    digitalWrite(5,LOW);
    delay(t);
    digitalWrite(6,HIGH);
    delay(t);
    digitalWrite(6,LOW);
    delay(t);
    digitalWrite(7,HIGH);
    delay(t);
    digitalWrite(7,LOW);
    delay(t);
  }
