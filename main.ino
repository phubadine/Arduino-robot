#include <ATX2.h>
#include <Wire.h>

byte dataCommand[4];
byte dataSend[3];

int Data;

int Status = 5;
int degreebase, degreeup, degreefront;

void setup() {
  Serial1.begin(115200);
  Serial1.setTimeout(10);
  Serial.begin(115200);
  Serial.setTimeout(10);
  Wire.begin(0x12);
  Wire.onReceive(receiveEvent);


  XIO();
  glcdMode(3);
  setTextSize(2);
  //  glcdClear();
  //  glcd(0, 0, "Press Start ");
  while (digitalRead(24) == 1);
  //  glcdClear();
  //  glcd(0, 0, "Start !!!");
  //  glcdClear();
  beeprange(5, 100);
    
    
  Forword(40, 0); delay(6000);
  Stop();
  Sideright(50); delay(2000);
  Stop();

  SendCube(2);
  
  Sideleft(50); delay(2000);
  Stop();
  Forword(40, 0); delay(6000);
  Stop();
  Sideright(50); delay(2000);
  Stop();

  SendCube(4);
  
  Sideleft(50); delay(2000);
  Stop();
  Forword(40, 0); delay(6000);
  Stop();
  Sideright(50); delay(2000);
  Stop();

  SendCube(3);
  
  Sideleft(50); delay(2000);
  Stop();

  Forword(40, 0); delay(4000);
  Stop();
  Forword(60, 30); delay(3000);
  Stop();
  Forword(60, 50); delay(2000);
  Stop();
  Forword(70, 47); delay(4700);
  Stop();
  Forword(70, 60); delay(200);
  Stop();
  Forword(40, 2); delay(2000);
  Stop();
  Sideright(50); delay(2000);
  Stop();

  SendCube(5);
  
  Sideleft(50); delay(2000);
  Stop();
  Turnright(60); delay(100);
  Stop();
  Forword(42, 2); delay(6500);
  Stop();
  Sideright(50); delay(2000);
  Stop();
    
  SendCube(1);
  
  Sideleft(50); delay(2000);
  Stop();
  














}

void loop() {
  //
  //
  //  if (Serial1.available() > 0)
  //  {
  //    String dat = Serial1.readString();
  //    Serial.println(dat);
  //    Data = dat.toInt();
  //    glcd(5, 0, "Data : %d", Data);
  //    glcdClear();
  //  }


  //    if (Data == 0) {               //not scan qr code
  //      //      motor(1, dataCommand[0] - 127);
  //      //      motor(2, dataCommand[1] - 127);
  //      //      motor(3, dataCommand[2] - 127);
  //      //      motor(4, dataCommand[3] - 127);
  //      Forword(50);
  //
  //    }
  //
  //    if (Data == 1) {
  //      beeprange(2, 100);
  //      MotorSend(1);
  //      Status--;
  //    }
  //
  //    if (Data == 2) {
  //      beeprange(2, 100);
  //      MotorSend(2);
  //      Status--;
  //    }
  //
  //    if (Data == 3) {
  //      beeprange(2, 100);
  //      MotorSend(3);
  //      Status--;
  //    }
  //
  //    if (Data == 4) {
  //      beeprange(2, 100);
  //      MotorSend(4);
  //      Status--;
  //    }
  //
  //    if (Data == 5) {
  //      beeprange(2, 100);
  //      MotorSend(5);
  //      Status--;
  //    }
  //
  //    if (Status == 0) {
  //      Stop();
  //      beeprange(10, 200);
  //    }
  //  motor(1, dataCommand[0] - 127);
  //  motor(2, dataCommand[1] - 127);
  //  motor(3, dataCommand[2] - 127);
  //  motor(4, dataCommand[3] - 127);



  //  glcd(0, 0, "Data : %d", dataCommand[0]);
  //  glcd(1, 0, "Data : %d", dataCommand[1]);
  //  glcd(2, 0, "Data : %d", dataCommand[2]);
  //  glcd(3, 0, "Data : %d", dataCommand[3]);
  glcd(4, 0, "Data : %d", Status);
  glcdClear();

}
