#define P_DS 8
#define P_CK 9 
#define P_OE 10

void setup() {
  pinMode(P_DS, OUTPUT);
  pinMode(P_CK, OUTPUT); 
  pinMode(P_OE, OUTPUT);
}

void refresh() 
{
//  digitalWrite(P_OE, LOW);  

    digitalWrite(P_DS, HIGH);
    digitalWrite(P_CK, LOW); 
    digitalWrite(P_CK, HIGH); 
    digitalWrite(P_DS, LOW);
    
//    digitalWrite(P_CK, LOW); 
//    digitalWrite(P_CK, HIGH); 


  for(int i=0; i<100; ++i)
  {
    digitalWrite(P_CK, LOW); 
    digitalWrite(P_CK, HIGH); 
    digitalWrite(P_CK, LOW); 
    digitalWrite(P_CK, HIGH); 
    digitalWrite(P_OE, LOW);
    delay(1);
    digitalWrite(P_OE, HIGH);
  }
  
}

void loop() {
  refresh();
}
