/*
 * Useless Duck Company kill switch code 
 * code based on tutorial from: 
 * Udemy.com
 * Using Photoresistors (LDRs) with an Arduino
 *
 */
 
 // pin assignments
 int LDR = 0;
 int LED = 13;
 
 // initialize the serial port
 // and declare inputs and outputs
 void setup() {
   pinMode(LDR, INPUT);
   Serial.begin(9600);
   pinMode(LED, OUTPUT);
   digitalWrite(LED, HIGH);
 }
 
 // read from the analog input connected to the LDR
 // and print the value to the serial port.
 // the delay is only to avoid sending so much data
 // as to make it unreadable.
 void loop() {
   int v = analogRead(LDR);
   if(v < 90)
   {
    delay(600);
    digitalWrite(LED, LOW);
    delay(10000);
    digitalWrite(LED, HIGH);
    }
   Serial.println(v);
   delay(1000);
 }
