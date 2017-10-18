// function for reading Elevation angular position

float readValue1()
{
  float u;
  currentMillis1 = millis();
  enc1count = 131+readEncoder(1);   // intial condition is 131 or 0.2 radians. 
  u = ((-enc1count*360)/(4*1024))*pi/180; //elevation  // encoder resolution is 4086
  val1 = u;
  return val1;
  previousMillis1 = currentMillis1;
  oldVal1 = val1;
}



//----------------------------------------------------------------------
// function for reading Pitch angular position

float readValue2()
{
  float u;
  unsigned long currentMillis3 = millis();
  enc2count = readEncoder(2);                           // intial condition is 0 radians.
  u = ((enc2count*360)/(4*1024))*pi/180; //Pitch // encoder resolution is 4086
  val2 = u;
  return val2;
  previousMillis2 = currentMillis3;
  oldVal2 = val2;
}


//-----------------------------------------------------------------------
// function for reading Travel angular position

float readValue3()
{
  float u;
  unsigned long currentMillis5 = millis();
  enc3count = readEncoder(3);               // intial condition is 0 radians.
  u = ((enc3count*360)/(8*1024))*pi/180; // encoder resolution is 8192
  val3 = u;
  return val3;
  previousMillis3 = currentMillis5;
  oldVal3 = val3;
}




