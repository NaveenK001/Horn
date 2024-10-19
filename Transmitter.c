const int KEY=2;
void setup()
{
  Serial.begin(1200);
  Serial.println("WELCOME");
  pinMode(KEY,INPUT);
  digitalWrite(KEY,HIGH);
}

void loop()
{
    if(digitalRead(KEY)==LOW)
    {
    Serial.print('Z');
    delay(50);  
    Serial.print('Z');
    delay(50);
    Serial.print('Z');
    delay(50);
    Serial.print('Z');
    delay(50);
    Serial.print('Z');
    delay(50);
    Serial.print('Z');
    delay(50);                            
    }
}
