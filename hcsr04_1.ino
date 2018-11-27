long t, d;

const int tr = 9;
const int e = 10;
void setup() {
pinMode(9,OUTPUT);
pinMode(10,INPUT);
Serial.begin(9600);  

}

void loop() {

digitalWrite(tr,LOW);
delayMicroseconds(2);

digitalWrite(tr, HIGH);
delayMicroseconds(10);
digitalWrite(tr, LOW);
t = pulseIn(e, HIGH);
d= t*0.034/2;
Serial.println(d);
if(d>10)
{
  light();
}
else
{
  light1();
}

}

void light()
{
  analogWrite(6, 100);
}
void light1()
{
  analogWrite(6, 10);
}
