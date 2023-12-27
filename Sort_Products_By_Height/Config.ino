#include "Lib.h"

namespace main{
  namespace Config{
    void setup(){
      main ::Sensor ::setup();
      main ::Motor ::setup();
      main ::Lcd   ::setup();
      main ::Speaker ::setup();
      main ::Servo_config::setup();

      main ::Motor  ::Stop();
      main ::Servo_config::Reset_Servo(0, 0, 0, 0);
    }

    void Start(){
      if(main ::Sensor::kiemtracambien(Sensor_3cm)==true){
        main ::Speaker ::Sound(1023, 125);
        main ::Lcd     ::Display_string(0, 0, "Type : 3cm");
        main ::Motor   ::Run();
        main ::Servo_config ::Servo1_Write();
      }

      else if(main ::Sensor::kiemtracambien(Sensor_6cm)==true){
        main ::Speaker ::Sound(1023, 125);
        main ::Lcd     ::Display_string(0, 0, "Type : 6cm");
        main ::Motor   ::Run();
        main ::Servo_config ::Servo2_Write();
      }

      else if(main ::Sensor::kiemtracambien(Sensor_9cm)==true){
        main ::Speaker ::Sound(1023, 125);
        main ::Lcd     ::Display_string(0, 0, "Type : 9cm");
        main ::Motor   ::Run();
        main ::Servo_config ::Servo3_Write();
      }

      else if(main ::Sensor::kiemtracambien(Sensor_12cm)==true){
        main ::Speaker ::Sound(1023, 125);
        main ::Lcd     ::Display_string(0, 0, "Type : 12cm");
        main ::Motor   ::Run();
        main ::Servo_config ::Servo4_Write();
      }
      else{
        main ::Motor ::Stop();
        main ::Servo_config ::Reset_Servo(0, 0, 0, 0);
        main ::Lcd ::Display_string(0,0, "No Product");
        main ::Speaker ::Stop_Tone();
      }
    }
  }
}