/*
--> Utilisation d'un potentiomètre pour contrôler l'allumage de 4 LED
  Fait par Delestre Noah
  Creation date : 02/10/2023 
  Last update : 05/10/2023
*/

int led1 = 4;
int led2 = 5;
int led3 = 6;
int led4 = 7;
int potPIN = A0;
int readValue;


void setup() {
  Serial.begin (9600);
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);
  }

void loop() {
  readValue = analogRead(potPIN);
  Serial.print("\Val=");
    Serial.print(readValue);
    if (readValue < 205) {
        Serial.println("\tled 1");
        digitalWrite(led1, LOW);
        digitalWrite(led2, LOW);
        digitalWrite(led3, LOW);
        digitalWrite(led4, LOW);
    }

    else if (readValue >= 205 && readValue < 410) {
        Serial.println("\tled 2");
        digitalWrite(led1, HIGH);
        digitalWrite(led2, LOW);
        digitalWrite(led3, LOW);
        digitalWrite(led4, LOW);
    }
    else if (readValue >= 410 && readValue < 615) {
        Serial.println("\tled 3");
        digitalWrite(led1, HIGH);
        digitalWrite(led2, HIGH);
        digitalWrite(led3, LOW);
        digitalWrite(led4, LOW);
    }

    else if (readValue >= 615 && readValue < 820) {
        Serial.println("\tled 4");
        digitalWrite(led1, HIGH);
        digitalWrite(led2, HIGH);
        digitalWrite(led3, HIGH);
        digitalWrite(led4, LOW);
    }

    else if (readValue >= 820 && readValue < 1024) {
        Serial.println("\tled 5");
        digitalWrite(led1, HIGH);
        digitalWrite(led2, HIGH);
        digitalWrite(led3, HIGH);
        digitalWrite(led4, HIGH);
    }
  }
