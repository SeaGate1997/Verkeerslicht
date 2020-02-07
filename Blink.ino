/*
  Traffic Lights

  Turns LEDs on and off in order to get a working traffic light.

  modified 7 Feb 2018
  by Colby Newman

*/


void setup() {
  
  pinMode(LED_BUILTIN, OUTPUT);
}


void loop() {
  digitalWrite(LED_BUILTIN, HIGH);  
  delay(1000);                      
  digitalWrite(LED_BUILTIN, LOW);   
  delay(1000);                       
  digitalWrite(LED_BUILTIN, HIGH);   
  delay(1000);                      
  digitalWrite(LED_BUILTIN, LOW);    
  delay(1000);                       
}
