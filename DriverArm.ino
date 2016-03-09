 #include <Servo.h>

/*
 Servo Driver, Copyright Smala Robotics 2016
 Build 2
 */

Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;
Servo servo5;
Servo servo6;

void setup() {                
  Serial.begin(9600); 
  Serial.println("MK2 Build 10301402");
  atemptConnect();
}

void loop() {
   int a = 0;
   int b = 0;
   
  
  switch(Serial.read())
  {
    case '0':
    a = Serial.parseInt();
    drop(a);
    break;
    case '1':
    a = Serial.parseInt();
    b = Serial.parseInt();
    hook(a,b);
    break;
    case '2':
    a = Serial.parseInt();
    b = Serial.parseInt();
    set(a,b);
    break;
    case '3':
    a = Serial.parseInt();
    cat(a);
    break;
  }
}



void atemptConnect()
{
  while (Serial.available() <= 0)
  {
    Serial.println("ROARM");
    delay(1000);
  }
}

void hook(int servonum, int pin_number)
{
  switch (servonum){
  default:
    //Serial.println("servo not found!");
    break;
  case 1:
    if (servo1.attached()== 1){
     //Serial.println("servo1 already attached!");
    }
    else{
        servo1.attach(pin_number);

       // Serial.println("servo1 attached!");
      
    }
    break;
  case 2:
    if (servo2.attached()== 1){
     //Serial.println("servo2 already attached!");
    }
    else{
      servo2.attach(pin_number);
      
       //Serial.println("servo2 attached!");
      
    }
    break;
  case 3:
    if (servo3.attached()== 1){
      //Serial.println("servo3 already attached!");
    }
    else{
      servo3.attach(pin_number); //Serial.println("servo3 attached!");
    }
    break;
  case 4:
    if (servo4.attached()== 1){
      //Serial.println("servo4 already attached!");
    }
    else{
      servo4.attach(pin_number); //Serial.println("servo4 attached!");
    }
    break;
  case 5:
    if (servo5.attached()== 1){
      //Serial.println("servo5 already attached!");
    }
    else{
       servo5.attach(pin_number); //Serial.println("servo5 attached!");
    }
    break;
  case 6:
    if (servo6.attached()== 1){
      //Serial.println("servo6 already attached!");
    }
    else{
      servo6.attach(pin_number); //Serial.println("servo6 attached!");
    }
    break;
  }
}

void drop(int servonum)
{
  switch (servonum){
  default:
    //Serial.println("servo not found!");
    break;
  case 1:
    if (servo1.attached()== 0){
      //Serial.println("servo1 already detached!");
    }
    else{
      servo1.detach();
      //Serial.println("servo1 detached!");
    }
    break;
  case 2:
    if (servo2.attached()== 0){
      //Serial.println("servo2 already detached!");
    }
    else{
      servo2.detach();
      //Serial.println("servo2 detached!");
    }
    break;
  case 3:
    if (servo3.attached()== 0){
      //Serial.println("servo3 already detached!");
    }
    else{
      servo3.detach();
      //Serial.println("servo3 detached!");
    }
    break;
  case 4:
    if (servo4.attached()== 0){
      //Serial.println("servo4 already detached!");
    }
    else{
      servo4.detach();
      //Serial.println("servo4 detached!");
    }
    break;
  case 5:
    if (servo5.attached()== 0){
      //Serial.println("servo5 already detached!");
    }
    else{
      servo5.detach();
      //Serial.println("servo5 detached!");
    }
    break;
  case 6:
    if (servo6.attached()== 0){
      //Serial.println("servo6 already detached!");
    }
    else{
      servo6.detach();
      //Serial.println("servo6 detached!");
    }
    break;
  }
}

void set(int servonum, int degre)
{

  switch (servonum){
  default:
    //Serial.println("servo not found!");
    break;
  case 1:
    if (servo1.attached()== 0){
      //Serial.println("servo1 not attached!");
    }
    else{
      servo1.write(degre);
      //Serial.println(servo1.read());
    }
    break;
  case 2:
    if (servo2.attached()== 0){
      //Serial.println("servo2 not attached!");
    }
    else{
      servo2.write(degre);
      //Serial.println(servo2.read());
    }
    break;
  case 3:
    if (servo3.attached()== 0){
      //Serial.println("servo3 not attached!");
    }
    else{
      servo3.write(degre);
      //Serial.println(servo3.read());
    }
    break;
  case 4:
    if (servo4.attached()== 0){
      //Serial.println("servo4 not attached!");
    }
    else{
      servo4.write(degre);
      //Serial.println(servo4.read());
    }
    break;
  case 5:
    if (servo5.attached()== 0){
      //Serial.println("servo5 not attached!");
    }
    else{
      servo5.write(degre);
      //Serial.println(servo5.read());
    }
    break;
  case 6:
    if (servo6.attached()== 0){
      //Serial.println("servo6 not attached!");
    }
    else{
      servo6.write(degre);
      //Serial.println(servo6.read());
    }
    break;
  }

}
void cat(int servonum)
{

  switch (servonum){
  default:
    Serial.println(-2);
    break;
  case 1:
    if (servo1.attached()== 0){
      Serial.println(-1);
    }
    else{
      Serial.println(servo1.read());
    }
    break;
  case 2:
    if (servo2.attached()== 0){
      Serial.println(-1);
    }
    else{
      Serial.println(servo2.read());
    }
    break;
  case 3:
    if (servo3.attached()== 0){
      Serial.println(-1);
    }
    else{
      Serial.println(servo3.read());
    }
    break;
  case 4:
    if (servo4.attached()== 0){
      Serial.println(-1);
    }
    else{
      Serial.println(servo4.read());
    }
    break;
  case 5:
    if (servo5.attached()== 0){
      Serial.println(-1);
    }
    else{
      Serial.println(servo5.read());
    }
    break;
  case 6:
    if (servo6.attached()== 0){
      Serial.println(-1);
    }
    else{
      Serial.println(servo6.read());
    }
    break;
  }

}

