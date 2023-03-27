int P1=3;
int P2=4;
int P3=5;
int P4=6;
int N1=7;
int N2=8;
int N3=9;
int N4=10;
int sw1=11;
int sw2=12;
int var1;
int var2;
void setup() 
{
Serial.begin(9600);
pinMode(P1,OUTPUT);
pinMode(P2,OUTPUT);
pinMode(P3,OUTPUT);
pinMode(P4,OUTPUT);
pinMode(N1,OUTPUT);
pinMode(N2,OUTPUT);
pinMode(N3,OUTPUT);
pinMode(N4,OUTPUT);
pinMode(sw1,INPUT);
pinMode(sw2,INPUT);// put your setup code here, to run once:
}
void loop() 
{
var1=digitalRead(sw1);
var2=digitalRead(sw2);
if (var1== HIGH && var2==LOW)
{
digitalWrite(P1,HIGH);
digitalWrite(P2,HIGH);
digitalWrite(P3,HIGH);
digitalWrite(P4,HIGH);
digitalWrite(N1,LOW);
digitalWrite(N2,LOW);
digitalWrite(N3,LOW);
digitalWrite(N4,LOW);
delay(25);
digitalWrite(P1,LOW);
digitalWrite(P2,LOW);
digitalWrite(P3,LOW);
digitalWrite(P4,LOW);
delay(1);
digitalWrite(N1,HIGH);
digitalWrite(N2,HIGH);
digitalWrite(N3,HIGH);
digitalWrite(N4,HIGH);
delay(25);
digitalWrite(N1,LOW);
digitalWrite(N2,LOW);
digitalWrite(N3,LOW);
digitalWrite(N4,LOW);
delay(1);
}
else if(var1==LOW && var2==HIGH)
{
digitalWrite(P1,HIGH);
digitalWrite(P2,HIGH);
digitalWrite(P3,HIGH);
digitalWrite(P4,HIGH);
digitalWrite(N1,LOW);
digitalWrite(N2,LOW);
digitalWrite(N3,LOW);
digitalWrite(N4,LOW);
delay(19);
digitalWrite(P1,LOW);
digitalWrite(P2,LOW);
digitalWrite(P3,LOW);
digitalWrite(P4,LOW);
delay(1);
digitalWrite(N1,HIGH);
digitalWrite(N2,HIGH);
digitalWrite(N3,HIGH);
digitalWrite(N4,HIGH);
delay(19);
digitalWrite(N1,LOW);
digitalWrite(N2,LOW);
digitalWrite(N3,LOW);
digitalWrite(N4,LOW);
delay(1);
// put your main code here, to run repeatedly:
}
else if(var1==HIGH && var2==HIGH)
{
digitalWrite(P1,HIGH);
digitalWrite(P2,HIGH);
digitalWrite(P3,HIGH);
digitalWrite(P4,HIGH);
digitalWrite(N1,LOW);
digitalWrite(N2,LOW);
digitalWrite(N3,LOW);
digitalWrite(N4,LOW);
delay(9);
digitalWrite(P1,LOW);
digitalWrite(P2,LOW);
digitalWrite(P3,LOW);
digitalWrite(P4,LOW);
delay(1);
digitalWrite(N1,HIGH);
digitalWrite(N2,HIGH);
digitalWrite(N3,HIGH);
digitalWrite(N4,HIGH);
delay(9);
digitalWrite(N1,LOW);
digitalWrite(N2,LOW);
digitalWrite(N3,LOW);
digitalWrite(N4,LOW);
delay(1);
}
else
{
digitalWrite(P1,LOW);
digitalWrite(P2,LOW);
digitalWrite(P3,LOW);
digitalWrite(P4,LOW);
digitalWrite(N1,LOW);
digitalWrite(N2,LOW);
digitalWrite(N3,LOW);
digitalWrite(N4,LOW);
}
}
