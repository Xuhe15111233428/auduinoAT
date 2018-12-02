#include <SoftwareSerial.h>
SoftwareSerial mySerial(2, 3);//TX RX

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  while (!Serial);  // For Yun/Leo/Micro/Zero/...
  Serial.println("begin to send AT code");
  mySerial.begin(115200);
  mySerial.println("AT+RST");
}

void loop() {
  // put your main code here, to run repeatedly:
  while(!mySerial.available());
  Serial.println(mySerial.read());
}
