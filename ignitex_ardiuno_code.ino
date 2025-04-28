char command;

void setup() 
{
pinMode(8,OUTPUT);
Serial.begin(9600);
digitalWrite(8,HIGH);
 }

void loop() 
{
if(Serial.available())
{
command=Serial.read();
Serial.print(command);

if(command=='A')
 digitalWrite(8,LOW);
 
if(command=='B')
digitalWrite(8,HIGH);
}
}
