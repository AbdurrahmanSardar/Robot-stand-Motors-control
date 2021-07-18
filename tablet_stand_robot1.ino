#include <Servo.h>
Servo motor1;    //Declare all six motors and name this as motor1 to motor6
Servo motor2;
Servo motor3;
Servo motor4;
Servo motor5;
Servo motor6;

void setup(){
motor1.attach(7);  //setup eacth motor to a signal portpin from 7 to 12
motor2.attach(8);  
motor3.attach(9);  
motor4.attach(10);  
motor5.attach(11);  
motor6.attach(12); 
  
pinMode(A0,INPUT);  //declare input pins of pushbuttons
pinMode(A1,INPUT);
pinMode(A2,INPUT);
  
motor1.write(0);  // initial state angle 0 degrees
motor2.write(0);  
motor3.write(0);  
motor4.write(0);  
motor5.write(0);  
motor6.write(0);
delay(100);      // wait for 0.1 sec
}

void loop(){
       
  if (digitalRead(A0) == 1){  // is pushbutton1 was HIGH then..  
    motor1.write(90);  // move all motors to position one
	motor2.write(130);  
	motor3.write(30);  
	motor4.write(90);  
	motor5.write(130);  
	motor6.write(30);  
	delay(3000);      // wait for 3 sec
  }
   if (digitalRead(A1) == 1){  // is pushbutton2 was HIGH then..
	motor1.write(50);  // move all motors to position two
	motor2.write(90);  
	motor3.write(150);  
	motor4.write(50);  
	motor5.write(150);  
	motor6.write(90);  
	delay(3000);      // wait for 3 sec
   }
     if (digitalRead(A2) == 1){  // is pushbutton3 was HIGH then..
motor1.write(90);     // move all motors to position three
motor2.write(90);  
motor3.write(90);  
motor4.write(90);  
motor5.write(90);  
motor6.write(90);  
delay(3000);          // wait for 3 sec
     }
  else{               //if else then..
    motor1.write(0);  // reset all mortors to initial state angle 0 degrees
	motor2.write(0);  
	motor3.write(0);  
	motor4.write(0);  
	motor5.write(0);  
	motor6.write(0);
  }}
