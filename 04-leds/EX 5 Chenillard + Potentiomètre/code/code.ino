/*
--> Utilisation d'un potentiomètre pour contrôler la vitesse du chenillard
  Fait par Delestre Noah
  Creation date : 05/10/2023 
  Last update : 05/10/2023
*/

int led1 = 4;
int led2 = 5;
int led3 = 6;
int led4 = 7;
int t = 0;
int potPIN = A0;
int readValue;
int writeValue;

void setup() {
  Serial.begin (9600);
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);
  }

void loop() {
  readValue = analogRead(potPIN);
    if (readValue < 100) {
        t = 100;
    }
    else if (readValue >= 100 && readValue < 200){
        t = 150;
    }
    else if (readValue >= 200 && readValue < 300) {
        t = 200;
    }
    else if (readValue >= 300 && readValue < 400) {
        t = 250;
    }
    else if (readValue >= 400 && readValue < 500) {
        t = 300;
    }
    else if (readValue >= 500 && readValue < 600) {
        t = 350;
    }
    else if (readValue >= 700 && readValue < 800) {
        t = 400;
    }
    else if (readValue >= 800 && readValue < 900) {
        t = 450;
    }
    else if (readValue >= 900 && readValue < 1024) {
        t = 500;
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
