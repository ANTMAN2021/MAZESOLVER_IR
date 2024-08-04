void readSensors(void){

  ir1=analogRead(IR);
  ir2=analogRead(IR2);
  ir3=analogRead(IR3);
  ir4=analogRead(IR4);
  ir5=analogRead(IR5);

  Serial.print(ir1);
  Serial.print("\t");
  Serial.print(ir2);
  Serial.print("\t");
  Serial.print(ir3);
  Serial.print("\t");
  Serial.print(ir4);
  Serial.print("\t");
  Serial.print(ir5);
  Serial.print("\t");
  Serial.print(error);
  Serial.print("\n");
}
void pid(void){
   error = ( (ir1) - (ir5)  );
        P = error;
        I = I + error;
        D = error - previousError;
        PIDvalue = (Kp * P) + (Ki * I) + (Kd * D);
        previousError = error;
        lsp = lfspeed - PIDvalue;
        rsp = lfspeed + PIDvalue;
        if (lsp > 255) {
          lsp = 250;
        }
        if (lsp < 0) {
          lsp = 30;
        }
        if (rsp > 255) {
          rsp = 255;
        }
        if (rsp < 0) {
          rsp = 30;
        }
        //delay(50);
        moveforward();
}
/*
void conditions(void){
  if(ir3<15){
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
          moveright();
          delay(250);
          forward();
          delay(200);
  }
  if(ir5>800){
          forward();
          delay(100);
          moveleft();
          delay(250);
          forward();
          delay(200);
  }
}
*/




