//OSRA 2.3.1
//Open Source Robotic Arm 2.3.1
#include <LiquidCrystal.h>
#include <Servo.h>
Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;
Servo servo5;
int joyX = 1;
int joyY = 0;
int joy2X = 2;
int joy2Y = 3;
int joyXVal;
int joyYVal;
int joy2XVal;
int joy2YVal;
int joy2X2Val;
int pos1 = 90;
int pos2 = 45;
int pos3 = 45;
int pos4 = 45;
int pos5 = 45;
LiquidCrystal lcd = LiquidCrystal(8, 9, 10, 11, 12, 13);
void setup ()
{
  servo1.attach(7);
  servo2.attach(6);
  servo3.attach(5);
  servo4.attach(4);
  servo5.attach(3);
  lcd.begin(16, 2);
  //Serial.begin(9600);
}
void loop()
{
  joyXVal = analogRead(joyX);
  joyYVal = analogRead(joyY);
  if (joyXVal > 520) {
    pos1 = pos1 - 1;
    servo1.write(pos1);
    delay(5);
    if (pos1 < 1)
    {
      pos1 = 1;
    }
  }
  if (joyXVal < 480) {
    pos1 = pos1 + 1;
    servo1.write(pos1);
    delay(5);
    if (pos1 > 180)
    {
      pos1 = 180;
    }
  }
  //Serial.println(joy2XVal);
  if (joyYVal > 520) {
    pos2 = pos2 - 1;
    servo2.write(pos2);
    delay(5);
    if (pos2 < 1)
    {
      pos2 = 1;
    }
  }
  if (joyYVal < 480) {
    pos2 = pos2 + 1;
    servo2.write(pos2);
    delay(5);
    if (pos2 > 90)
    {
      pos2 = 90;
    }
  }
  lcd.setCursor(0, 0);
  lcd.print("J1 X:");
  lcd.print(joyXVal);
  lcd.print(" ");
  lcd.print("J1 Y:");
  lcd.print(joyYVal);
  joy2XVal = analogRead(joy2X);
  joy2YVal = analogRead(joy2Y);
  if (joy2YVal > 520) {
    pos3 = pos3 - 1;
    servo3.write(pos3);
    delay(5);
    if (pos3 < 1)
    {
      pos3 = 1;
    }
  }
  if (joy2YVal < 480) {
    pos3 = pos3 + 1;
    servo3.write(pos3);
    delay(5);
    if (pos3 > 90)
    {
      pos3 = 90;
    }
  }
  if (joy2XVal > 500) {
    pos4 = pos4 - 1;
    servo4.write(pos4);
    delay(5);
    if (pos4 < 1)
    {
      pos4 = 1;
    }
  }
  if (joy2XVal < 400) {
    pos4 = pos4 + 1;
    servo4.write(pos4);
    delay(5);
    if (pos4 > 90)
    {
      pos4 = 90;
    }
  }
  lcd.setCursor(0, 1);
  lcd.print("J2 X:");
  lcd.print(joy2YVal / 2);
  lcd.print(" ");
  lcd.print("J2 Y:");
  lcd.print(joy2XVal);
  joy2X2Val = analogRead(joy2X);
  if (joy2X2Val < 400) {
    pos5 = pos5 - 1;
    servo5.write(pos5);
    delay(5);
    if (pos5 < 1)
    {
      pos5 = 1;
    }
  }
  if (joy2X2Val > 500) {
    pos5 = pos5 + 1;
    servo5.write(pos5);
    delay(5);
    if (pos5 > 90)
    {
      pos5 = 90;
    }
  }
}
