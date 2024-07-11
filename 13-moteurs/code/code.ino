#define led1 8
#define led2 9
#define led3 10
#define led4 11
int time = 2000;

void setup() {
  Serial.begin(9600);
  pinMode(3, OUTPUT);      //sortie moteur
  pinMode(12, OUTPUT);     //sortie moteur
  pinMode (led1, OUTPUT);  //sortie leds
  pinMode (led2, OUTPUT);  //sortie leds
  pinMode (led3, OUTPUT);  //sortie leds
  pinMode (led4, OUTPUT);  //sortie leds
}

void loop() {
  digitalWrite(12, HIGH);
  
  analogWrite(3, 175);       //on défini la vitesse du moteur
  digitalWrite(led1, HIGH); //gestion des leds
  digitalWrite(led2, LOW);  //gestion des leds
  digitalWrite(led3, LOW);  //gestion des leds
  digitalWrite(led4, LOW);  //gestion des leds
  delay(time);
  
  analogWrite(3, 200);       //on défini la vitesse du moteur
  digitalWrite(led1, HIGH); //gestion des leds
  digitalWrite(led2, HIGH); //gestion des leds
  digitalWrite(led3, LOW);  //gestion des leds
  digitalWrite(led4, LOW);  //gestion des leds
  delay(time);
  
  analogWrite(3, 225);      //on défini la vitesse du moteur
  digitalWrite(led1, HIGH); //gestion des leds
  digitalWrite(led2, HIGH); //gestion des leds
  digitalWrite(led3, HIGH); //gestion des leds
  digitalWrite(led4, LOW);  //gestion des leds
  delay(time);
  
  analogWrite(3, 250);      //on défini la vitesse du moteur
  digitalWrite(led1, HIGH); //gestion des leds
  digitalWrite(led2, HIGH); //gestion des leds
  digitalWrite(led3, HIGH); //gestion des leds
  digitalWrite(led4, HIGH); //gestion des leds
  delay(time);
  

  digitalWrite(12, LOW);

  
  analogWrite(3, 225);      //on défini la vitesse du moteur
  digitalWrite(led1, HIGH); //gestion des leds
  digitalWrite(led2, HIGH); //gestion des leds
  digitalWrite(led3, HIGH); //gestion des leds
  digitalWrite(led4, LOW);  //gestion des leds
  delay(time);
  
  analogWrite(3, 200);       //on défini la vitesse du moteur
  digitalWrite(led1, HIGH); //gestion des leds
  digitalWrite(led2, HIGH); //gestion des leds
  digitalWrite(led3, LOW);  //gestion des leds
  digitalWrite(led4, LOW);  //gestion des leds
  delay(time);
  
  analogWrite(3, 175);       //on défini la vitesse du moteur
  digitalWrite(led1, HIGH); //gestion des leds
  digitalWrite(led2, LOW);  //gestion des leds
  digitalWrite(led3, LOW);  //gestion des leds
  digitalWrite(led4, LOW);  //gestion des leds
  delay(time);

  delay(time);
}
