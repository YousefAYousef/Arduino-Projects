/********************************************/
/*Project Name: Bluetooth Controlled Car    */
/*Developed By: Yousef Ali                  */
/*Date : 10 DEC 2022                        */
/*Version: 0.1                              */
/********************************************/
//The Bluetooth Command
char BlModule;            
//Motor Driver Pins on Arduino
const int right_Motor_Forward = 2; 
const int right_Motor_Backward = 3;
const int left_Motor_Forward = 4;
const int left_Motor_Backward = 5;
void setup()
{
  pinMode(left_Motor_Forward,OUTPUT);    //left motor forward
  pinMode(left_Motor_Backward,OUTPUT);   //left motor reverse
  pinMode(right_Motor_Forward,OUTPUT);   //right motor forward
  pinMode(right_Motor_Backward,OUTPUT);  //right motor reverse
  Serial.begin(9600);
}
void loop() 
{
  if(Serial.available())
  {
    BlModule = Serial.read();
  }
   
  if(BlModule == 'F') //move forward
  {           
    digitalWrite(left_Motor_Forward,HIGH);
    digitalWrite(right_Motor_Forward,HIGH);
  }
   
  else if(BlModule == 'B') //move Backword
  {      
    digitalWrite(right_Motor_Backward,HIGH);
    digitalWrite(right_Motor_Backward,HIGH);
  }
   
  else if(BlModule == 'L') //turn Left
  {      
    digitalWrite(right_Motor_Forward,HIGH);
    digitalWrite(left_Motor_Backward,HIGH);
  }
   
  else if(BlModule == 'R')   //turn Right
  {     
    digitalWrite(left_Motor_Forward,HIGH);
    digitalWrite(right_Motor_Backward,HIGH);
  }
  else          //stop
  {       
    digitalWrite(left_Motor_Forward,LOW);
    digitalWrite(right_Motor_Backward,LOW);
    digitalWrite(right_Motor_Forward,LOW);
    digitalWrite(right_Motor_Backward,LOW);
  }
  delay(50);
}
