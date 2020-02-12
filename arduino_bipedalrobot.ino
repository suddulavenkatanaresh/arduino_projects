/*CODED  BY THE VENKATA NARESH YADAV SUDDULA FOR THE BIPEADL ROBOT 

*/
#include <Servo.h>

Servo myservo_LB; 
Servo myservo_LM;
Servo myservo_LU;
Servo myservo_RU;
Servo myservo_RM;
Servo myservo_RB;




//STEP_O

int step0_pos = 90;    // all thje joints at this step are in the position of zero

//STEP_1

int step1_pos_LB =45 ; int step1_pos_RB =70 ;  //in this step the joints LB 


  ///STEP_2
int step2_POS=105;   ////STEP2=STEP2A i.e all lm,lu,ru,rm having same value of 105
 


//STEP_3

int step3_pos_LB =90 ; int step3_pos_RB =90 ;  // step3 values =step 0 values

//STEP_4

int step4_pos_LB =110 ; int step4_pos_RB =135 ; 

//STEP_5

int step5_POS=75;   /// i.e all lm,lu,ru,rm having same value of 75

//STEP_6
int step6_pos_LB =90 ; int step6_pos_RB =90 ;  // step3 values =step 0 values


void setup() {
myservo_LB.attach(3);                  // attaches the servo_LB on pin-3 
myservo_LM.attach(5);                 // attaches the servo_LM on pin-5 
myservo_LU.attach(6);               // attaches the servo_LU on pin-6
myservo_RU.attach(9);             //attaches the servo_RU on pin-9
myservo_RM.attach(10);          // attaches the servo_RM on pin-10 
myservo_RB.attach(11);        //attaches the servo_RB on pin-11 
  step_0();
 
Serial.begin(9600);
Serial.println("Helo this is venkatanaresh yadav suddula");
   
   
}





void loop() {
step_1();
step_2();
step_3();
step_4();
step_5();
step_6();

}


void step_0(){
  //int step0_pos = 90;
myservo_LB.write(step0_pos);
myservo_LM.write(step0_pos);
myservo_LU.write(step0_pos);
myservo_RU.write(step0_pos);
myservo_RM.write(step0_pos);
myservo_RB.write(step0_pos);
return;
}



void step_1(){

///int step1_pos_LB =45 ; int step1_pos_RB =70 ; 
myservo_LB.write(step1_pos_LB);
Serial.println(step1_pos_LB);

myservo_RB.write(step1_pos_RB);
Serial.println(step1_pos_RB);
return ;

}



void step_2(){
//int step2_POS=105;
 
myservo_LM.write(step2_POS);
Serial.println(step2_POS);

myservo_LU.write(step2_POS);
Serial.println(step2_POS);

myservo_RU.write(step2_POS);
Serial.println(step2_POS);

myservo_RM.write(step2_POS);
Serial.println(step2_POS);
  return ;

}


void step_3(){

//int step3_pos_LB =90 ; int step3_pos_RB =90 ;

myservo_LB.write(step3_pos_LB);
Serial.println(step3_pos_LB);

myservo_RB.write(step3_pos_RB);
Serial.println(step3_pos_LB);
return ;

}




void step_4(){

//int step4_pos_LB =110 ; int step4_pos_RB =135 ; 
myservo_LB.write(step4_pos_LB);
Serial.println(step3_pos_LB);

myservo_RB.write(step4_pos_RB);
Serial.println(step3_pos_RB);
return ;

}



void step_5(){
  
//int step5_POS=75;
 
myservo_LM.write(step5_POS);
Serial.println(step5_POS);

myservo_LU.write(step5_POS);
Serial.println(step5_POS);

myservo_RU.write(step5_POS);
Serial.println(step5_POS);

myservo_RM.write(step5_POS);
Serial.println(step5_POS);
  return ;

}


void step_6(){

///int step6_pos_LB =90 ; int step6_pos_RB =90 ;

myservo_LB.write(step6_pos_LB);
Serial.println(step6_pos_LB);

myservo_RB.write(step6_pos_RB);
Serial.println(step6_pos_RB);
return ;

}
