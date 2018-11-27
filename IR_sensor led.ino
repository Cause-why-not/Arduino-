int i;
void setup() {
pinMode(5, INPUT);
Serial.begin(9600);
}

void loop() {
Serial.println(" hi");  
i=digitalRead(5);
if(i==0)
{
  light1();
}
else if(i==1)
{
 light(); 
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

