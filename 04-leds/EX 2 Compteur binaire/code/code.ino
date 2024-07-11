/*
--> Création d'un compteur binaire avec 3 boutons et 4 LED
  Fait par Delestre Noah
  Creation date : 05/10/2023 
  Last update : 09/10/2023
*/


#define led1 4
#define led2 5
#define led3 6
#define led4 7

int bp1 = 0;
int bp2 = 0;
int bp3 = 0;
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
 pinMode(bp1, INPUT);
 pinMode(bp2, INPUT);
 pinMode(bp3, INPUT);
}

void loop() {
  bp1= digitalRead(9);
  if (bp1== 0) {
    nbr = nbr + 1;
    if (nbr > 16){
      nbr = 15;
    }
  }
  delay(50);
  
  bp2= digitalRead(10);
  if (bp2 == 0) {
    nbr = nbr - 1;
    if (nbr > 250){
      nbr = 0 ;
    }
  }
  delay(50);
  
  bp3= digitalRead(11);
  if (bp3 == 1) {
    if (nbr == 0){
      nbr = 15;
    }
    else{
      nbr = 0;
    }
  }
  delay(50);
  
  Serial.println(nbr);
  
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
}
