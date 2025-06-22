const int hall_A = 2;
const int hall_B = 3;
const int hall_C = 4;
const int led1 = 5;
const int led2 = 8;
const int led3 = 7;
int hallA;
int hallB;
int hallC;
void setup() {
pinMode(hall_A,INPUT);
pinMode(hall_B,INPUT);
pinMode(hall_C,INPUT);
pinMode(led1,OUTPUT);
pinMode(led2,OUTPUT);
pinMode(led3,OUTPUT);
Serial.begin(9600);
}
void loop() {
hallA=digitalRead(hall_A);
Serial.print(&quot;A: &quot;);
Serial.println(hallA);
if(hallA==HIGH)
{
digitalWrite(led1,HIGH);
}
else
{
digitalWrite(led1,LOW);
}
hallB=digitalRead(hall_B);
Serial.print(&quot;B: &quot;);
Serial.println(hallB);
if(hallB==HIGH)
{
digitalWrite(led2,HIGH);
}
else
{
digitalWrite(led2,LOW);
}
hallC=digitalRead(hall_C);
Serial.print(&quot;C: &quot;);
Serial.println(hallC);
if(hallC==HIGH)
{
digitalWrite(led3,HIGH);
}
else
{
digitalWrite(led3,LOW);
}
delay(100);    }
