int bt1SENS = 0;
int sens = 0;
int bt2AUGM = 0;
int t = 200;
int bt3DIM = 0;

void setup() {
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(9,INPUT);
  pinMode(10,INPUT);
  pinMode(11,INPUT);
}

void loop() {
  bt1SENS= digitalRead(9);
  if (bt1SENS == 1) {
    if (sens == 1){
      sens = 0;
    }
    else {
      sens = 1;
    }
  }
  bt2AUGM = digitalRead(10);
  if (bt2AUGM == 1) {
    if (t < 2000){
      t = t + 100;
    }
    else{
      t = 200;
    }
  }
  bt3DIM = digitalRead(11);
  if (bt3DIM == 1) {
    if (t > 50) {
      t = t - 100;
    }
    else {
      t = 200;
    }
  }

  if (sens == 0) {
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

  else  {
    digitalWrite(7,HIGH);
    delay(t);
    digitalWrite(7,LOW);
    delay(t);
    digitalWrite(6,HIGH);
    delay(t);
    digitalWrite(6,LOW);
    delay(t);
    digitalWrite(5,HIGH);
    delay(t);
    digitalWrite(5,LOW);
    delay(t);
    digitalWrite(4,HIGH);
    delay(t);
    digitalWrite(4,LOW);
    delay(t);
  }
}
