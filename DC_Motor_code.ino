void setup()
{
  pinMode(2, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
}

void loop()
{
  digitalWrite(2, HIGH);
  delay(1000); 
  digitalWrite(3, LOW);
  delay(1000); 
  digitalWrite(4, HIGH);
  delay(1000); 
  digitalWrite(5, LOW);
  delay(1000); 
}
