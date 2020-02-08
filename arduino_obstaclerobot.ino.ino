#include <Servo.h>  //sevo library
int x;              //declaring variable x
int pos;            //decalring variable pos

Servo myservo;   // create servo object to control a servo
                 // twelve servo objects can be created on most boards
                 // variable to store the servo position

void setup() {
  myservo.attach(11);  //attaching my servo to pin to 11 on my board
  pinMode(3,INPUT);    //setting pin mode for my infrared sensor
  pinMode(8,OUTPUT);   //setting up pins up for my left motor
  pinMode(12,OUTPUT);  //  ''
  pinMode(6,OUTPUT);   //''
  pinMode(7,OUTPUT);   //setting up pins for my right motor
  pinMode(4,OUTPUT);   //''
  pinMode(5,OUTPUT);   //''
  digitalWrite(6,HIGH); //starting the motors in the beginning
  digitalWrite(5,HIGH); //starting the motors in the begininig
  
  
}

void loop() 
{
 myservo.write(90);     //setiing up 90 degree position in my servo that is the forward direction
 delay(1350);           //giving the servo time to reach the desired position
 if(digitalRead(3)==0)  //if the infrared sensor shows no obstacle in front
 {                        //then
   digitalWrite(12,HIGH);//the next four lines are for moving the robot forward
  digitalWrite(8,LOW);
  digitalWrite(4,HIGH);
  digitalWrite(7,LOW); 
   for (pos = 90; pos <= 120; pos += 1)//moving the eyes of the robot (to give it a moving eye effect) this for moving the eyes in the left,you have to alter the angles according to you
   { 
    myservo.write(pos);            
    delay(15);                     
  }
  for (pos = 120; pos >= 60; pos -= 1)//moving the eyes of the robot (to give it a moving eye effect) this for moving the eyes in the right,you have to alter the angles acoording to you
  {
    myservo.write(pos);              
    delay(15);                       
  }
 }
 if(digitalRead(3)==1)   //if the infrared sensor tells that there is a obstacle in front
 {                        //then the next 4 line tells the motors to stop
  digitalWrite(12,LOW);
  digitalWrite(8,LOW);
  digitalWrite(4,LOW);
  digitalWrite(7,LOW);
  delay(15);
 myservo.write(180);      //this moves the servo to the left 
 delay(1350);             //time given to the servo to move to that positon
 if(digitalRead(3)==0)    //then in the left position the avaailbility of the object is again checked(0 mean no obastacle)
 {                        //then the next four lines tell the robot to move left
  digitalWrite(12,HIGH);   
  digitalWrite(8,LOW);
  digitalWrite(4,LOW);
  digitalWrite(7,HIGH);  
  delay(150); 
 }
 else                      //if in the left position also there is a obsatcle then the eyes are moved to the right
 {
 myservo.write(0);          //angle 0 in the servo means moving the eyes the to the right
 delay(2700);
 if(digitalRead(3)==0)      //in the right positon the presence of the object is checked, if there is a no object present
 {                          //then the following four lines move the robot to the right
  digitalWrite(12,LOW);
  digitalWrite(8,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(7,LOW);  
  delay(150);     
 }
 else                      //if there is a obstaclemin the right too
 {
  myservo.write(90);       // then the eyes of the robot are moved back to the initial position thet is straight(and for me 90degree)
  delay(1350);             //time given to the servo to move to that positionand the following four lines moves the robot backwards
  digitalWrite(12,LOW);
  digitalWrite(8,HIGH);
  digitalWrite(4,LOW);
  digitalWrite(7,HIGH);
  delay(350); 
 }
   myservo.write(180);      //while moving backwards the servo eyes are moved to the left
 delay(2700);               //time goven to the servo tho move to that position
 if(digitalRead(3)==0)      // while moving backwards  the left position the presence of the obstacle is again checked,when there is no object in the left
                            //then the next four lines move the robot to the left 
 {
  digitalWrite(12,HIGH);
  digitalWrite(8,LOW);
  digitalWrite(4,LOW);
  digitalWrite(7,HIGH);  
  delay(150); 
 }
 else
 {
 myservo.write(0);         //if while moving backwards there is a  object in the left then the eyes are moved to the right
 delay(2700);              //time given to the dervo to move to that position
 if(digitalRead(3)==0)     //the presence of object is checked and if there is not object then following four lines move the robot in the right
 {
  digitalWrite(12,LOW);
  digitalWrite(8,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(7,LOW);  
  delay(150);     
 }
 }
 }
 }
}
