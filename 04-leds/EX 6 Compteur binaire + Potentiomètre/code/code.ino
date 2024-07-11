/*
--> Création d'un compteur binaire avec un potentiomètre et 4 LED
  Fait par Delestre Noah
  Creation date : 12/10/2023 
  Last update : 12/10/2023
*/


#define led1 4
#define led2 5
#define led3 6
#define led4 7
int potPIN = A0;
int readValue;

int sens = 0;
unsigned char nbr = 0;
unsigned char reste = 0;
float Pot;

void setup() {
 Serial.begin(9600);
 pinMode(led1, OUTPUT);
 pinMode(led2, OUTPUT);
 pinMode(led3, OUTPUT);
 pinMode(led4, OUTPUT);
}

void loop() {
  readValue = analogRead(potPIN);
  Serial.print("\Val=");
    Serial.print(readValue);
    if (readValue < 64) {
        Serial.println("\tled 1");
        digitalWrite(led1, LOW);
        digitalWrite(led2, LOW);
        digitalWrite(led3, LOW);
        digitalWrite(led4, LOW);
    }
    else if (readValue >= 64 && readValue < 128) {
        Serial.println("\tled 2");
        digitalWrite(led1, HIGH);
        digitalWrite(led2, LOW);
        digitalWrite(led3, LOW);
        digitalWrite(led4, LOW);
    }
    else if (readValue >= 128 && readValue < 192) {
        Serial.println("\tled 3");
        digitalWrite(led1, LOW);
        digitalWrite(led2, HIGH);
        digitalWrite(led3, LOW);
        digitalWrite(led4, LOW);
    }
    else if (readValue >= 192 && readValue < 256) {
        Serial.println("\tled 4");
        digitalWrite(led1, HIGH);
        digitalWrite(led2, HIGH);
        digitalWrite(led3, LOW);
        digitalWrite(led4, LOW);
    }
    else if (readValue >= 256 && readValue < 320) {
        Serial.println("\tled 5");
        digitalWrite(led1, LOW);
        digitalWrite(led2, LOW);
        digitalWrite(led3, HIGH);
        digitalWrite(led4, LOW);
    }
    else if (readValue >= 320 && readValue < 384) {
        Serial.println("\tled 5");
        digitalWrite(led1, HIGH);
        digitalWrite(led2, LOW);
        digitalWrite(led3, HIGH);
        digitalWrite(led4, LOW);
    }
    else if (readValue >= 384 && readValue < 448) {
        Serial.println("\tled 5");
        digitalWrite(led1, LOW);
        digitalWrite(led2, HIGH);
        digitalWrite(led3, HIGH);
        digitalWrite(led4, LOW);
    }    
    else if (readValue >= 448 && readValue < 512) {
        Serial.println("\tled 5");
        digitalWrite(led1, HIGH);
        digitalWrite(led2, HIGH);
        digitalWrite(led3, HIGH);
        digitalWrite(led4, LOW);
    }
    else if (readValue >= 512 && readValue < 576) {
        Serial.println("\tled 5");
        digitalWrite(led1, LOW);
        digitalWrite(led2, LOW);
        digitalWrite(led3, LOW);
        digitalWrite(led4, HIGH);
    }
    else if (readValue >= 576 && readValue < 640) {
        Serial.println("\tled 2");
        digitalWrite(led1, HIGH);
        digitalWrite(led2, LOW);
        digitalWrite(led3, LOW);
        digitalWrite(led4, HIGH);
    }
    else if (readValue >= 640 && readValue < 704) {
        Serial.println("\tled 3");
        digitalWrite(led1, LOW);
        digitalWrite(led2, HIGH);
        digitalWrite(led3, LOW);
        digitalWrite(led4, HIGH);
    }
    else if (readValue >= 704 && readValue < 768) {
        Serial.println("\tled 4");
        digitalWrite(led1, HIGH);
        digitalWrite(led2, HIGH);
        digitalWrite(led3, LOW);
        digitalWrite(led4, HIGH);
    }
    else if (readValue >= 768 && readValue < 832) {
        Serial.println("\tled 5");
        digitalWrite(led1, LOW);
        digitalWrite(led2, LOW);
        digitalWrite(led3, HIGH);
        digitalWrite(led4, HIGH);
    }
    else if (readValue >= 832 && readValue < 896) {
        Serial.println("\tled 5");
        digitalWrite(led1, HIGH);
        digitalWrite(led2, LOW);
        digitalWrite(led3, HIGH);
        digitalWrite(led4, HIGH);
    }
    else if (readValue >= 896 && readValue < 960) {
        Serial.println("\tled 5");
        digitalWrite(led1, LOW);
        digitalWrite(led2, HIGH);
        digitalWrite(led3, HIGH);
        digitalWrite(led4, HIGH);
    }    
    else if (readValue >= 960 && readValue < 1024) {
        Serial.println("\tled 5");
        digitalWrite(led1, HIGH);
        digitalWrite(led2, HIGH);
        digitalWrite(led3, HIGH);
        digitalWrite(led4, HIGH);
    }
  }
  //delay(50);
  
 /* Serial.println(nbr);
  
  //reste = nbr % 2;
  if ((nbr % 2) > 0) {
    digitalWrite(led1, HIGH);
  }
  else{
    digitalWrite(led1, LOW);
  }
  
  //reste = nbr % 4;
  if ((nbr % 4) > 1) {
    digitalWrite(led2, HIGH);
  }
  else{
    digitalWrite(led2, LOW);
  }
  
  //reste = nbr % 8;
  if ((nbr % 8) > 3) {
    digitalWrite(led3, HIGH);
  }
  else{
    digitalWrite(led3, LOW);
  }
  
  //reste = nbr % 16;
  if ((nbr % 16) > 7) {
    digitalWrite(led4, HIGH);
  }
  else{
    digitalWrite(led4, LOW);
  }
  
  delay(100);
}*/
