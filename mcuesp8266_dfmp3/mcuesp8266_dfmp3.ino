#include "Arduino.h"
#include "SoftwareSerial.h"
#include "DFRobotDFPlayerMini.h"
SoftwareSerial ss(D1,D2); // RX, TX
DFRobotDFPlayerMini mp3;
void setup()
{
ss.begin(9600);
Serial.begin(115200);
Serial.println();
Serial.println(F("DFRobot DFPlayer Mini Demo"));
Serial.println(F("Initializing DFPlayer ... (May take 3~5 seconds)"));
if(!mp3. begin(ss)){
Serial.println("controllo cavi");
while(true);
}
Serial.println(F("DFPlayer Mini online."));
mp3.volume(50);
}
void loop()
{
  while (true) {
mp3.play(2);
delay(100000);
  }
}
