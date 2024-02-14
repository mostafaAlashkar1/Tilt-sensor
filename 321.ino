int motor=6;
int button=8;
int Reading=0;
void setup()
{
  pinMode(button,INPUT);
  pinMode(motor,OUTPUT);
}

void loop()
{
  Reading = digitalRead(button);
if (Reading == HIGH)
{
digitalWrite(motor, HIGH);
}
else
{
digitalWrite(motor, LOW);
}
  
} 
 
