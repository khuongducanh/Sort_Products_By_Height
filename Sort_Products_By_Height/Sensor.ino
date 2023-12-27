#include "Lib.h"

namespace main{
  namespace Sensor{
     void setup(){
       pinMode(Sensor_3cm,INPUT);
       pinMode(Sensor_6cm,INPUT);
       pinMode(Sensor_9cm,INPUT);
       pinMode(Sensor_12cm,INPUT);
     }

      bool kiemtracambien(int Pin){
      if(digitalRead(Pin)==0)
        return true ;
      return false ;  
    }
  }
}