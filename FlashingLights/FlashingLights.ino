
static unsigned int myNum - 8;

void setup() {
  pinMode(myNum, OUTPUT);

 }

void loop() {
  digitalWrite(myNum, HIGH);
  delay(1000);
  digitalWrite(myNum, false);
  delay(500);

 }
