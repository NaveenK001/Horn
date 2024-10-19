const int BUZZ=11;
char x=0;
void setup()
{
  Serial.begin(1200);
  Serial.println("WELCOME");
  pinMode(BUZZ,OUTPUT);
  digitalWrite(BUZZ,LOW);  
}

void loop()
{
 
    if(Serial.available()>0)  // Send data only when you receive data:
    {
    x = Serial.read();      //Read the incoming data and store it into variable data
    Serial.println(x);  
    if(x == 'Z')            
    {
    Serial.print("SIGNAL FROM TRANSMITTER");  
    digitalWrite(BUZZ,HIGH);      
    delay(5000);  
    Serial.end();
    Serial.begin(1200);    
    digitalWrite(BUZZ,LOW);  
    }
    }    
 
}
