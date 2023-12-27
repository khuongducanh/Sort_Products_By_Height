#include "Lib.h"

namespace main{    
  namespace Servo_config{     
      Servo servo1;
      Servo servo2;
      Servo servo3;
      Servo servo4;
    void setup(){
      servo1.attach(SERVODEXOAY);
      servo2.attach(SERVOTRUC1);
      servo3.attach(SERVOGAP1);
      servo4.attach(SERVOGAP2);  
    }

    void Reset_Servo(int servo_1 , int servo_2 , int servo_3 , int servo_4){
      servo1.write(servo_1); 
      servo2.write(servo_2);
      servo3.write(servo_3);
      servo4.write(servo_4);
      delay(50);
    }

    void Servo1_Write(){
      servo1.write(90); 
    }

    void Servo2_Write(){
      servo2.write(90); 
    }

    void Servo3_Write(){
      servo3.write(90); 
    }

    void Servo4_Write(){
      servo4.write(90); 
    }
  }
}