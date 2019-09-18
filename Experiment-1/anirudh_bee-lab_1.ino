
int pinsCount=4;                        
int pins[] = {13,12,11,10};          
 
void setup() 
{                
for (int i=0; i<4; i=i+1)
{    
pinMode(pins[i], OUTPUT);            
  }
}
 
void loop() {
for (int i=0; i<4; i=i+1)
{   
 digitalWrite(pins[i], HIGH);         
 delay(100);                          
 digitalWrite(pins[i], LOW);          
  }
for (int i=4-1; i>0; i=i-1)
{   
 digitalWrite(pins[i], HIGH);         
 delay(100);                            
 digitalWrite(pins[i], LOW);          
  }
}