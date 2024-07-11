/*
--> Création d'une guirlande de noel avec 6 LEDs et 4 boutons afin d'avoir 3 modes différents
  Fait par Delestre Noah
  Creation date : 12/10/2023 
  Last update : 16/10/2023
*/
#define LED1 3
#define LED2 5
#define LED3 6
#define LED4 9
#define LED5 10
#define LED6 11
#define BT1 7
#define BT2 8
#define BT3 12
#define BT4 13


int bt1Mode1 = 0;
int bt2Mode2 = 0;
int bt3Mode3 = -1;
int bt4Speed = 0;
int mode = 0;
int sens = 0;
byte t = 200
float lum = 0;
float fade = 25.5;

void setup() {
  Serial.begin(9600);
  pinMode(LED1,OUTPUT);
  pinMode(LED2,OUTPUT);
  pinMode(LED3,OUTPUT);
  pinMode(LED4,OUTPUT);
  pinMode(LED5,OUTPUT);
  pinMode(LED6,OUTPUT);
  pinMode(BT1,INPUT);
  pinMode(BT2,INPUT);
  pinMode(BT3,INPUT);
  pinMode(BT4,INPUT);
  
  digitalWrite(LED1,LOW);
  digitalWrite(LED2,LOW);
  digitalWrite(LED3,LOW);
  digitalWrite(LED4,LOW);
  digitalWrite(LED5,LOW);
  digitalWrite(LED6,LOW);
  
}
void loop(){
  Serial.println (bt1Mode1);
  Serial.println (bt2Mode2);
  Serial.println (bt3Mode3);

  bt4Speed= digitalRead (BT4);
  if (bt4Speed == 1) { 
    if (t == 200) {
      t = 100;
    }
    else {
      t = 300;
    }
  }
  
  bt1Mode1= digitalRead(BT1);
  bt2Mode2 = digitalRead(BT2);
  bt3Mode3 = digitalRead(BT3);
  if (bt1Mode1 == 1){
    mode = 0;
    mode = 1;
  }
  if (bt2Mode2 == 1){
    mode = 0;
    mode = 2;
  }
  if (bt3Mode3 == 1){
    mode = 0;
    mode = 3;
  }
  if (mode == 1){
    digitalWrite(LED1,HIGH);
    digitalWrite(LED2,LOW);
    digitalWrite(LED3,HIGH);
    digitalWrite(LED4,LOW);
    digitalWrite(LED5,HIGH);
    digitalWrite(LED6,LOW);
    delay(t);
    digitalWrite(LED1,LOW);
    digitalWrite(LED2,HIGH);
    digitalWrite(LED3,LOW);
    digitalWrite(LED4,HIGH);
    digitalWrite(LED5,LOW);
    digitalWrite(LED6,HIGH);
    delay(t);
  }
  if (mode == 2){
    lum = lum + fade;
    analogWrite(LED1,lum);
    analogWrite(LED2,lum);
    analogWrite(LED3,lum);
    analogWrite(LED4,lum);
    analogWrite(LED5,lum);
    analogWrite(LED6,lum);
    delay(t);
    if (lum == 255||lum==0){
      while (lum > 0){
        lum = lum - fade;
        analogWrite(LED1,lum);
        analogWrite(LED2,lum);
        analogWrite(LED3,lum);
        analogWrite(LED4,lum);
        analogWrite(LED5,lum);
        analogWrite(LED6,lum);
        delay(500);
      }
    }
  }
  if (mode == 3){
    digitalWrite(LED1, HIGH);
    digitalWrite(LED2, HIGH);
    delay(t);
    digitalWrite(LED1, LOW);
    digitalWrite(LED2, LOW);
    delay(t);
    digitalWrite(LED3, HIGH);
    digitalWrite(LED4, HIGH);
    delay(t);
    digitalWrite(LED3, LOW);
    digitalWrite(LED4, LOW);
    delay(t);
    digitalWrite(LED5, HIGH);
    digitalWrite(LED6, HIGH);
    delay(t);
    digitalWrite(LED5, LOW);
    digitalWrite(LED6, LOW);
    delay(t);
    digitalWrite(LED3, HIGH);
    digitalWrite(LED4, HIGH);
    delay(t);
    digitalWrite(LED3, LOW);
    digitalWrite(LED4, LOW);
    delay(t);
  }
}
