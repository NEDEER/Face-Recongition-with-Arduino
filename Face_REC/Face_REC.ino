#include <cvzone.h>

SerialData serialData(2, 1); // num0fValsREc,digitsPerValRec
int valsRec[2];
void setup() {
    pinMode(11,OUTPUT);
    pinMode(12,OUTPUT);
    serialData.begin();    
}

void loop() {
  serialData.Get(valsRec);
  digitalWrite(11,valsRec[0]); // green led
  digitalWrite(12,valsRec[1]); // red led
  delay(10);
}
