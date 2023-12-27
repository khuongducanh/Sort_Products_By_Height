#include <Servo.h>//include Library
#include <LiquidCrystal.h>

#define Sensor_3cm  20//Pin Sensor 
#define Sensor_6cm  21
#define Sensor_9cm  22
#define Sensor_12cm 23

#define SERVODEXOAY 6//Pin Servo
#define SERVOTRUC1 7
#define SERVOGAP1 8
#define SERVOGAP2 10

#define RS 11//Pin Lcd
#define EN 12
#define D4 13
#define D5 14
#define D6 15
#define D7 16

#define SPEAKER 25//Pin Speaker

#define DONGCO 43//Pin Relay

namespace main{
  namespace Sensor{
    void setup();
    bool kiemtracambien(int Pin);
  }

  namespace Motor{
    void setup();
    void Run();
    void Stop();
  }

    namespace Lcd{
    void setup();
    void Display_string(int column , int row , char *str);
    void Display_number(int column,int row,int number);
  }

    namespace Speaker{
    void setup();
    void Sound(int Duty_Cycle ,int Time);
    void Stop_Tone();
  }

  namespace Servo_config{
    void setup();
    void Reset_Servo(int servo_1 , int servo_2 , int servo_3 , int servo_4 );
    void Servo1_Write();
    void Servo2_Write();
    void Servo3_Write();
    void Servo4_Write();
  }

  namespace Config{
    void setup();
    void Start();
  }
}