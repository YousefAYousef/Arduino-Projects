// initialize pins 
int eR =0 ;
int dR = 1 ;
int cR = 2 ;
int bR = 3 ;
int aR = 4 ; 
int fR= 5 ;
int gR = 6 ;
int eL =7 ;
int dL = 8 ;
int cL = 9 ;
int bL = 10 ;
int aL = 11 ; 
int fL= 12 ;
int gL = 13 ;

int count = 0 ;   //counter
void setup()
{
//set all pins as output
  for (int i = 0 ; i <=13 ; i ++){
    pinMode(i , OUTPUT) ;
  }
    pinMode(12 , INPUT); // set pin 12 as input (push button)

}
// turn off the left digit
void off(){
    digitalWrite(aL, LOW);
  digitalWrite(bL, LOW);
  digitalWrite(cL, LOW);
  digitalWrite(dL, LOW);
  digitalWrite(eL, LOW);
  digitalWrite(fL, LOW);
  digitalWrite(gL, LOW);
}
//turn zero on left digit
void zeroL(){
    digitalWrite(aL, HIGH);
  digitalWrite(bL, HIGH);
  digitalWrite(cL, HIGH);
  digitalWrite(dL, HIGH);
  digitalWrite(eL, HIGH);
  digitalWrite(fL, HIGH);
  digitalWrite(gL, LOW);
}
//turn zero on right digit

void zeroR(){
 digitalWrite(aR, HIGH);
  digitalWrite(bR, HIGH);
  digitalWrite(cR, HIGH);
  digitalWrite(dR, HIGH);
  digitalWrite(eR, HIGH);
  digitalWrite(fR, HIGH);
  digitalWrite(gR, LOW);
  
}
//turn one on right digit
void oneR(){

 digitalWrite(eR, LOW);
  digitalWrite(fR, LOW);
   digitalWrite(aR, LOW);
  digitalWrite(bR, HIGH);
  digitalWrite(cR, HIGH);
  digitalWrite(dR, LOW);
  digitalWrite(gR, LOW);
}
//turn one on left digit
void oneL(){

 digitalWrite(eL, LOW);
  digitalWrite(fL, LOW);
   digitalWrite(aL, LOW);
  digitalWrite(bL, HIGH);
  digitalWrite(cL, HIGH);
  digitalWrite(dL, LOW);
  digitalWrite(gL, LOW);
}
//turn tow on right digit
void towR(){

 digitalWrite(eR, HIGH);
  digitalWrite(fR,LOW);
   digitalWrite(aR, HIGH);
  digitalWrite(bR, HIGH);
  digitalWrite(cR, LOW);
  digitalWrite(dR, HIGH);
  digitalWrite(gR, HIGH);
}
// three on right digit
void threeR(){

 digitalWrite(eR, LOW);
  digitalWrite(fR,LOW);
   digitalWrite(aR, HIGH);
  digitalWrite(bR, HIGH);
  digitalWrite(cR, HIGH);
  digitalWrite(dR, HIGH);
  digitalWrite(gR, HIGH);
}
//four on right digit
void fourR(){

 digitalWrite(eR, LOW);
  digitalWrite(fR,HIGH);
   digitalWrite(aR, LOW);
  digitalWrite(bR, HIGH);
  digitalWrite(cR, HIGH);
  digitalWrite(dR, LOW);
  digitalWrite(gR, HIGH);
}
void fiveR(){

 digitalWrite(eR, LOW);
  digitalWrite(fR,HIGH);
   digitalWrite(aR, HIGH);
  digitalWrite(bR, LOW);
  digitalWrite(cR, HIGH);
  digitalWrite(dR, HIGH);
  digitalWrite(gR, HIGH);
}
void sixR(){

 digitalWrite(eR, HIGH);
  digitalWrite(fR,HIGH);
   digitalWrite(aR, HIGH);
  digitalWrite(bR, LOW);
  digitalWrite(cR, HIGH);
  digitalWrite(dR, HIGH);
  digitalWrite(gR, HIGH);
}
void sevenR(){

 digitalWrite(eR, LOW);
  digitalWrite(fR,LOW);
   digitalWrite(aR, HIGH);
  digitalWrite(bR, HIGH);
  digitalWrite(cR, HIGH);
  digitalWrite(dR, LOW);
  digitalWrite(gR, LOW);
}
void eightR(){

 digitalWrite(eR, HIGH);
  digitalWrite(fR,HIGH);
   digitalWrite(aR, HIGH);
  digitalWrite(bR, HIGH);
  digitalWrite(cR, HIGH);
  digitalWrite(dR, HIGH);
  digitalWrite(gR, HIGH);
}
void nineR(){

 digitalWrite(eR, LOW);
  digitalWrite(fR,HIGH);
   digitalWrite(aR, HIGH);
  digitalWrite(bR, HIGH);
  digitalWrite(cR, HIGH);
  digitalWrite(dR, HIGH);
  digitalWrite(gR, HIGH);
}
// tow on left digit
void towL(){

 digitalWrite(eL, HIGH);
  digitalWrite(fL,LOW);
   digitalWrite(aL, HIGH);
  digitalWrite(bL, HIGH);
  digitalWrite(cL, LOW);
  digitalWrite(dL, HIGH);
  digitalWrite(gL, HIGH); 


}
// three on left digit
void threeL(){

 digitalWrite(eL, LOW);
  digitalWrite(fL,LOW);
   digitalWrite(aL, HIGH);
  digitalWrite(bL, HIGH);
  digitalWrite(cL, HIGH);
  digitalWrite(dL, HIGH);
  digitalWrite(gL, HIGH);

   
}
//display s on right digit
void stopR(){

 digitalWrite(eR, LOW);
  digitalWrite(fR,HIGH);
   digitalWrite(aR, HIGH);
  digitalWrite(bR, LOW);
  digitalWrite(cR, HIGH);
  digitalWrite(dR, HIGH);
  digitalWrite(gR, HIGH);
    digitalWrite(gR, HIGH);

}
//display s on left digit
void stopL(){

 digitalWrite(eL, LOW);
  digitalWrite(fL,HIGH);
   digitalWrite(aL, HIGH);
  digitalWrite(bL, LOW);
  digitalWrite(cL, HIGH);
  digitalWrite(dL, HIGH);
  digitalWrite(gL, HIGH);
    digitalWrite(gL, HIGH);
   

}
// display t
void t(){

 digitalWrite(eR, HIGH);
  digitalWrite(fR,HIGH);
   digitalWrite(aR, LOW);
  digitalWrite(bR, LOW);
  digitalWrite(cR, LOW);
  digitalWrite(dR, HIGH);
  digitalWrite(gR, HIGH);
    digitalWrite(gR, HIGH);
   
 
}
//display m on right digit
void moveR(){

 digitalWrite(eR, HIGH);
  digitalWrite(fR,HIGH);
   digitalWrite(aR, HIGH);
  digitalWrite(bR, HIGH);
  digitalWrite(cR, HIGH);
  digitalWrite(dR, LOW);
  digitalWrite(gR, LOW);
   

}
// display m on left digit
void moveL(){

 digitalWrite(eL, HIGH);
  digitalWrite(fL,HIGH);
   digitalWrite(aL, HIGH);
  digitalWrite(bL, HIGH);
  digitalWrite(cL, HIGH);
  digitalWrite(dL, LOW);
  digitalWrite(gL, LOW);

}
//display v
void v(){

 digitalWrite(eR, HIGH);
  digitalWrite(fR,HIGH);
   digitalWrite(aR, LOW);
  digitalWrite(bR, HIGH);
  digitalWrite(cR, HIGH);
  digitalWrite(dR, HIGH);
  digitalWrite(gR, LOW);
   

}
// start count down from 9 to 0 on the right digit
void RCounter(){
 
  
  nineR();
  delay(1000);
   eightR();
  delay(1000);
   sevenR();
  delay(1000);
  sixR();
   delay(1000);
  fiveR();
  delay(1000);
  fourR();
  delay(1000);
  threeR();
  delay(1000);
  towR();
  delay(1000);
  oneR();
  delay(1000);
  zeroR();

}
// start countdown from 30 to 0
void counting(){ delay(100);
  threeL();
 
  zeroR();
   delay(1000);
  
  towL();
RCounter();
    delay(1000);
 
  oneL();
  
   
RCounter();
delay(1000);
  
  zeroL();
  RCounter();
   
  delay(1000);
                
               }
//start the loop
void loop(){
          if( digitalRead(12) ==HIGH){   // if the push button clicked
         
 counting();

 
 
  off();
  
  count++;
  if(count %2 ==0 ){     //this if to display move in one time and stop after it
  stopR();  //display stop
  delay(800);
  stopL();
  t();
              if( digitalRead(12) ==HIGH){   // if you want start the counter again //click on the push button

  
  delay(3000);
              }}
  else
  {
    moveR();  //display move
  delay(800);
  moveL();
  v();
               if( digitalRead(12) ==HIGH){  

  delay(3000);
               }
  }}}
