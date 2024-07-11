int directionPin = 12;
int pwmPin = 3;
int brakePin = 9;
#define led1 1
#define led2 2
#define led3 4
#define led4 5
int time = 1000;

//boolean to switch direction
bool directionState;

void setup() {
  
//define pins
pinMode(directionPin, OUTPUT); //sortie moteur
pinMode(pwmPin, OUTPUT);       //sortie moteur
pinMode(brakePin, OUTPUT);     //sortie moteur
pinMode (led1, OUTPUT);        //sortie leds
pinMode (led2, OUTPUT);        //sortie leds
pinMode (led3, OUTPUT);        //sortie leds
pinMode (led4, OUTPUT);        //sortie leds

}

void loop() {
directionState = !directionState;   //change direction every loop()
if(directionState == false){        //write a low state to the direction pin (13)
  digitalWrite(directionPin, LOW);  //write a low state to the direction pin (13)
  
  analogWrite(pwmPin, 175);       //on défini la vitesse du moteur
  digitalWrite(led1, HIGH); //gestion des leds
  digitalWrite(led2, LOW);  //gestion des leds
  digitalWrite(led3, LOW);  //gestion des leds
  digitalWrite(led4, LOW);  //gestion des leds
  delay(time);
  
  analogWrite(pwmPin, 200);       //on défini la vitesse du moteur
  digitalWrite(led1, HIGH); //gestion des leds
  digitalWrite(led2, HIGH); //gestion des leds
  digitalWrite(led3, LOW);  //gestion des leds
  digitalWrite(led4, LOW);  //gestion des leds
  delay(time);
  
  analogWrite(pwmPin, 225);      //on défini la vitesse du moteur
  digitalWrite(led1, HIGH); //gestion des leds
  digitalWrite(led2, HIGH); //gestion des leds
  digitalWrite(led3, HIGH); //gestion des leds
  digitalWrite(led4, LOW);  //gestion des leds
  delay(time);
  
  analogWrite(pwmPin, 255);      //on défini la vitesse du moteur
  digitalWrite(led1, HIGH); //gestion des leds
  digitalWrite(led2, HIGH); //gestion des leds
  digitalWrite(led3, HIGH); //gestion des leds
  digitalWrite(led4, HIGH); //gestion des leds
  delay(time);
}
else{                               //write a high state to the direction pin (13)
  digitalWrite(directionPin, HIGH); //write a high state to the direction pin (13)
  
  analogWrite(pwmPin, 225);      //on défini la vitesse du moteur
  digitalWrite(led1, HIGH); //gestion des leds
  digitalWrite(led2, HIGH); //gestion des leds
  digitalWrite(led3, HIGH); //gestion des leds
  digitalWrite(led4, LOW);  //gestion des leds
  delay(time);
  
  analogWrite(pwmPin, 200);       //on défini la vitesse du moteur
  digitalWrite(led1, HIGH); //gestion des leds
  digitalWrite(led2, HIGH); //gestion des leds
  digitalWrite(led3, LOW);  //gestion des leds
  digitalWrite(led4, LOW);  //gestion des leds
  delay(time);
  
  analogWrite(pwmPin, 175);       //on défini la vitesse du moteur
  digitalWrite(led1, HIGH); //gestion des leds
  digitalWrite(led2, LOW);  //gestion des leds
  digitalWrite(led3, LOW);  //gestion des leds
  digitalWrite(led4, LOW);  //gestion des leds
  delay(time);
}




//digitalWrite(brakePin, LOW);        //release breaks
//analogWrite(pwmPin, 255);           //set work duty for the motor
//
//delay(time);
//digitalWrite(brakePin, HIGH);       //activate breaks
//analogWrite(pwmPin, 0);             //set work duty for the motor to 0 (off)




delay(2000);
}
