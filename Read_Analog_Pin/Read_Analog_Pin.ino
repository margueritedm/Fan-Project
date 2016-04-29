
void setup() 
{ 
  Serial.begin(9600); 
 }

void loop()
{
int potPin=A1, potVal;

  potVal = analogRead( potPin );
  Serial.println( potVal );
  }


