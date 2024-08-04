#include "micromouse.h"

void setup() {
  Serial.begin(9600);
  gpioInit();
    
    
}
void loop(){
  readSensors();
  pid();
  if(ir3<20){
          stopmouse();
          delay(200);
          backward();
          delay(200);
          moveleft();
          delay(190);
  }
  //conditions();
   //readSensors();
      /*
        error = ( ir1 - ir5  );
        P = error;
        I = I + error;
        D = error - previousError;
        PIDvalue = (Kp * P) + (Ki * I) + (Kd * D);
        previousError = error;
        lsp = lfspeed - PIDvalue;
        rsp = lfspeed + PIDvalue;
        if (lsp > 255) {
          lsp = 255;
        }
        if (lsp < 0) {
          lsp = 0;
        }
        if (rsp > 255) {
          rsp = 255;
        }
        if (rsp < 0) {
          rsp = 0;
        }
        moveforward();*/

       /* if(ir3<15){
          stopmouse();
          delay(200);
          backward();
          delay(200);
          moveleft();
          delay(190);
        }
        if(ir1>800){
          forward();
          delay(100);
          moveleft();
          delay(250);
          forward();
          delay(100);
        }
        if(ir5>800){
          forward();
          delay(100);
          moveright();
          delay(250);
          forward();
          delay(100);
        }*/
         
  
}
