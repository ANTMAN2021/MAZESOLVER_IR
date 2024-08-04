//if all sensors are on off
bool stopmouse()
{
  analogWrite(e1, 0); //you can adjust the speed of the motors from 0-255
  analogWrite(e2, 0); //you can adjust the speed of the motors from 0-255
 
  digitalWrite(m1, LOW);
  digitalWrite(m2, LOW);
  digitalWrite(m3, LOW);
  digitalWrite(m4, LOW);
  
  return true;
}

bool moveforward()
{
  //going forward with full speed 
  analogWrite(e1, lsp); //you can adjust the speed of the motors from 0-255
  analogWrite(e2, rsp); //you can adjust the speed of the motors from 0-255
  
  digitalWrite(m1, LOW);
  digitalWrite(m2, HIGH);
  digitalWrite(m3, LOW);
  digitalWrite(m4, HIGH);
  
  return true;
}
bool forward()
{
  //going forward with full speed 
  analogWrite(e1, 200); //you can adjust the speed of the motors from 0-255
  analogWrite(e2, 200); //you can adjust the speed of the motors from 0-255
  
  digitalWrite(m1, LOW);
  digitalWrite(m2, HIGH);
  digitalWrite(m3, LOW);
  digitalWrite(m4, HIGH);
  
  return true;
}


bool moveright()
{
  //going right with full speed 
  analogWrite(e1, 150); //you can adjust the speed of the motors from 0-255
  analogWrite(e2, 150); //you can adjust the speed of the motors from 0-255
 
  digitalWrite(m1, HIGH);
  digitalWrite(m2, LOW);
  digitalWrite(m3, LOW);
  digitalWrite(m4, HIGH);
  
  return true;
}

bool moveleft()
{
  //going left with full speed 
  analogWrite(e1, 150); //you can adjust the speed of the motors from 0-255
  analogWrite(e2, 150); //you can adjust the speed of the motors from 0-255
  
  digitalWrite(m1, LOW);
  digitalWrite(m2, HIGH);
  digitalWrite(m3, HIGH);
  digitalWrite(m4, LOW);
  
  return true;
}

bool backward()
{
  //going exteme left with full speed //not working
  analogWrite(e1, 100); //you can adjust the speed of the motors from 0-255
  analogWrite(e2, 100); //you can adjust the speed of the motors from 0-255
  
  digitalWrite(m1, HIGH);
  digitalWrite(m2, LOW);
  digitalWrite(m3, HIGH);
  digitalWrite(m4, LOW);
  
  return true;
}
