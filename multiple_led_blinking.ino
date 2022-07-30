int led1=13;
int led2=12
int led3=10
int led4=11
int led5=8
int led6=9
int led7=8
int led8=7

void setup()
{
  pinMode(13,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(7,OUTPUT);
}
void loop()
{
  digitalWrite(led1,HIGH);
  delay(100);
  digitalWrite(led2,HIGH);
  delay(200);
  digitalWrite(led3,HIGH);
  delay(300)
  digitalWrite(led4,HIGH);
  delay(400)
  digitalWrite(led5,HIGH);
  delay(100);
  digitalWrite(led6,HIGH);
  delay(200);
  digitalWrite(led7,HIGH);
  delay(300)
  digitalWrite(led8,HIGH);
  delay(400)
  digitalWrite(led1,LOW);
  delay(100);
  digitalWrite(led2,LOW);
  delay(200);
  digitalWrite(led3,LOW);
  delay(300)
  digitalWrite(led4,LOW);
  delay(400)
  digitalWrite(led5,LOW);
  delay(100);
  digitalWrite(led6,LOW);
  delay(200);
  digitalWrite(led7,LOW);
  delay(300)
  digitalWrite(led8,LOW);
  delay(400)
  
}
