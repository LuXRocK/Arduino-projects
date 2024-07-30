#include <stdio.h>
int stcp_pin = 4;
int shcp_pin = 3;
int ds_pin = 2;

int numbers[] = {126, 48, 109, 121, 51, 91, 95, 112, 127, 123};

void setup() {
  // put your setup code here, to run once:
  pinMode(stcp_pin, OUTPUT);
  pinMode(shcp_pin, OUTPUT);
  pinMode(ds_pin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  // for(int i = 0; i < sizeof(numbers) / sizeof(numbers[0]); i++){
  //   digitalWrite(stcp_pin, LOW);
  //   shiftOut(ds_pin, shcp_pin, LSBFIRST, numbers[i]);
  //   digitalWrite(stcp_pin, HIGH);
  //   delay(500);
  // }
  digitalWrite(stcp_pin, LOW);
  shiftOut(ds_pin, shcp_pin, LSBFIRST, numbers[3]);
  digitalWrite(stcp_pin, HIGH);
}
