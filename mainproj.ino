#define RIGHT_BACKWARD  2
#define RIGHT_FORWARD   4
#define LEFT_FORWARD     5
#define LEFT_BACKWARD    7

const int ledPin = 13; // the pin that the LED is attached to
int incomingByte;      // a variable to read incoming serial incomingByte into

//char incomingByte;

void setup() {

   pinMode(ledPin, OUTPUT);
    
    pinMode(RIGHT_BACKWARD,OUTPUT);
    pinMode(RIGHT_FORWARD,OUTPUT);
    pinMode(LEFT_FORWARD,OUTPUT);
    pinMode(LEFT_BACKWARD,OUTPUT);
    Serial.begin(9600);
}
 





void loop() {


if (Serial.available() > 0) {
   
    incomingByte = Serial.read();
    
    
    if (incomingByte == 'H') {
      digitalWrite(ledPin, HIGH);
    }

    
   
    if (incomingByte == 'L') {
      digitalWrite(ledPin, LOW);
    }


    
    if (incomingByte == 'f') {
  digitalWrite(RIGHT_FORWARD,HIGH);
  digitalWrite(LEFT_FORWARD,HIGH);
  digitalWrite(LEFT_BACKWARD,LOW);
  digitalWrite(RIGHT_BACKWARD,LOW);
      
    }

    
    
    // if the state is 'R' the motor will turn left
    if (incomingByte == 'r') {
    //digitalWrite(RIGHT_FORWARD,LOW);
 /// digitalWrite(LEFT_FORWARD,LOW);
   digitalWrite(LEFT_BACKWARD,HIGH);
  //digitalWrite(RIGHT_BACKWARD,HIGH);
     
    }

    if(incomingByte=='t') {
    digitalWrite(LEFT_BACKWARD,LOW);
  digitalWrite(RIGHT_BACKWARD,LOW);
  digitalWrite(RIGHT_FORWARD,LOW);
  digitalWrite(LEFT_FORWARD,LOW);
  
      
    }


  if(incomingByte=='T') {
    digitalWrite(LEFT_BACKWARD,LOW);
  digitalWrite(RIGHT_BACKWARD,LOW);
  digitalWrite(RIGHT_FORWARD,HIGH);
  digitalWrite(LEFT_FORWARD,LOW);
  
      
    }

 if(incomingByte=='5') {
    digitalWrite(LEFT_BACKWARD,LOW);
  digitalWrite(RIGHT_BACKWARD,LOW);
  digitalWrite(RIGHT_FORWARD,LOW);
  digitalWrite(LEFT_FORWARD,HIGH);
  
      
    }

 if(incomingByte=='6') {
    digitalWrite(LEFT_BACKWARD,LOW);
  digitalWrite(RIGHT_BACKWARD,HIGH);
  digitalWrite(RIGHT_FORWARD,LOW);
  digitalWrite(LEFT_FORWARD,LOW);
  
      
    }



   if(incomingByte=='7') {
    digitalWrite(LEFT_BACKWARD,HIGH);
  digitalWrite(RIGHT_BACKWARD,LOW);
  digitalWrite(RIGHT_FORWARD,LOW);
  digitalWrite(LEFT_FORWARD,LOW);
  
      
    }


    




}





}
