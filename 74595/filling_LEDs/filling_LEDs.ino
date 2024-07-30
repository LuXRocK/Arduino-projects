int stcp_pin = 4;
int shcp_pin = 3;
int ds_pin = 2;

void setup() {
  // put your setup code here, to run once:
  pinMode(stcp_pin, OUTPUT);
  pinMode(shcp_pin, OUTPUT);
  pinMode(ds_pin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i = 128; i > 0; i = i / 2){
    digitalWrite(stcp_pin, LOW);
    shiftOut(ds_pin, shcp_pin, LSBFIRST, i);
    digitalWrite(stcp_pin, HIGH);
    delay(250);
  }
    digitalWrite(stcp_pin, LOW);
    shiftOut(ds_pin, shcp_pin, LSBFIRST, 1);
    digitalWrite(stcp_pin, HIGH);
    delay(250);

  for(int i = 128; i > 2; i = i / 2){
    digitalWrite(stcp_pin, LOW);
    shiftOut(ds_pin, shcp_pin, LSBFIRST, i+1);
    digitalWrite(stcp_pin, HIGH);
    delay(250);
  }
  digitalWrite(stcp_pin, LOW);
  shiftOut(ds_pin, shcp_pin, LSBFIRST, 3);
  digitalWrite(stcp_pin, HIGH);
  delay(250);

for(int i = 128; i > 4; i = i / 2){
    digitalWrite(stcp_pin, LOW);
    shiftOut(ds_pin, shcp_pin, LSBFIRST, i+3);
    digitalWrite(stcp_pin, HIGH);
    delay(250);
  }
  digitalWrite(stcp_pin, LOW);
  shiftOut(ds_pin, shcp_pin, LSBFIRST, 7);
  digitalWrite(stcp_pin, HIGH);
  delay(250);
for(int i = 128; i > 8; i = i / 2){
    digitalWrite(stcp_pin, LOW);
    shiftOut(ds_pin, shcp_pin, LSBFIRST, i+7);
    digitalWrite(stcp_pin, HIGH);
    delay(250);
  }
  digitalWrite(stcp_pin, LOW);
  shiftOut(ds_pin, shcp_pin, LSBFIRST, 15);
  digitalWrite(stcp_pin, HIGH);
  delay(250);

for(int i = 128; i > 16; i = i / 2){
    digitalWrite(stcp_pin, LOW);
    shiftOut(ds_pin, shcp_pin, LSBFIRST, i+15);
    digitalWrite(stcp_pin, HIGH);
    delay(250);
  }
  digitalWrite(stcp_pin, LOW);
  shiftOut(ds_pin, shcp_pin, LSBFIRST, 31);
  digitalWrite(stcp_pin, HIGH);
  delay(250);

  for(int i = 128; i > 32; i = i / 2){
    digitalWrite(stcp_pin, LOW);
    shiftOut(ds_pin, shcp_pin, LSBFIRST, i+31);
    digitalWrite(stcp_pin, HIGH);
    delay(250);
  }
  digitalWrite(stcp_pin, LOW);
  shiftOut(ds_pin, shcp_pin, LSBFIRST, 63);
  digitalWrite(stcp_pin, HIGH);
  delay(250);

  for(int i = 128; i > 64; i = i / 2){
    digitalWrite(stcp_pin, LOW);
    shiftOut(ds_pin, shcp_pin, LSBFIRST, i+63);
    digitalWrite(stcp_pin, HIGH);
    delay(250);
  }
  digitalWrite(stcp_pin, LOW);
  shiftOut(ds_pin, shcp_pin, LSBFIRST, 127);
  digitalWrite(stcp_pin, HIGH);
  delay(250);

  digitalWrite(stcp_pin, LOW);
  shiftOut(ds_pin, shcp_pin, LSBFIRST, 255);
  digitalWrite(stcp_pin, HIGH);
  delay(1000);
}
