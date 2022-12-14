/* Read an Analog Sensor with Arduino
 * Example using LDR Light Sensor
 *
 * For use without warranty
 * www.learnrobotics.org
 */

int ldr = A0;
int reading;
int threshold = 900;


void setup()
{
  pinMode(ldr, INPUT);
  Serial.begin(9600);
}

void lightCheck(){
  reading = analogRead(ldr);
  Serial.print("reading = ");
  Serial.print(reading);
  if(reading >= threshold){
    Serial.println(" daylight");
  }
  else{
    Serial.println(" nighttime");
  }
  delay(1000);
}

void loop(){
  lightCheck();
}
