int LED=0;
void setup() {
  // put your setup code here, to run once:
  pinMode(LED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED, false);
  delay(1000);
  digitalWrite(LED, true);
  delay(4000);
}
