#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
const int trig = 7;
const int echo = 6;
const int buzzer = 10;

long duration;
int distance;

void setup() {
  // put your setup code here, to run once:
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  pinMode(buzzer, OUTPUT);
  lcd.begin(16, 2);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(trig, LOW);
  delayMicroseconds(2);

  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);

  duration = pulseIn(echo, HIGH);
  distance = duration * 0.034 / 2;

  lcd.clear();
  lcd.setCursor(0, 0);

  if(distance > 40){
    lcd.print("Out of range");
    noTone(buzzer);
  }else{
    lcd.print("Distance: ");
    lcd.print(distance);
    lcd.print("cm");
    controlBuzzer(distance);
  }

  delay(500);
}
void controlBuzzer(int distance){
  if(distance > 40){
    noTone(buzzer);
  }else if(distance > 30 && distance <= 40){
    tone(buzzer, 1000, 100);
    delay(400);
  }else if(distance > 20 && distance <= 30){
    tone(buzzer, 1000, 100);
    delay(200);
  }else if(distance > 10 && distance <= 20){
    tone(buzzer, 1000, 100);
    delay(100);
  }else if(distance <= 10){
    tone(buzzer, 1000);
  }
}
