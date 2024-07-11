#define ledR 3
#define ledV 4
#define ledJ1 5
#define ledJ2 6
#define ledJ3 7
#define BTMode 8
#define BT1 9
#define BT2 10
#define BT3 11


int btMode = 0;
int bt1 = 0;
int bt2 = 0;
int bt3 = 0;
int seq1 = 0;
int seq2 = 0;
int seq3 = 0;


void setup() {
  Serial.begin(9600);
  pinMode(ledR,OUTPUT);
  pinMode(ledV,OUTPUT);
  pinMode(ledJ1,OUTPUT);
  pinMode(ledJ2,OUTPUT);
  pinMode(ledJ3,OUTPUT);
  pinMode(BT1,INPUT);
  pinMode(BT2,INPUT);
  pinMode(BT3,INPUT);
  pinMode(BT4,INPUT);
  digitalWrite(ledR,HIGH);
  digitalWrite(ledV,HIGH);
  digitalWrite(ledJ1,HIGH);
  digitalWrite(ledJ2,HIGH);
  digitalWrite(ledJ3,HIGH);
}
void loop() {
  btMode= digitalRead(BTMode);
  if (btMode == 1){
    digitalWrite(ledR,LOW);
    digitalWrite(ledV,LOW);
    digitalWrite(ledJ1,LOW);
    digitalWrite(ledJ2,LOW);
    digitalWrite(ledJ3,LOW);
    seq1=0;
    seq2=0;
    seq3=0;
  }
  bt1= digitalRead(BT1);
  bt2= digitalRead(BT2);
  bt3= digitalRead(BT3);
  

}
