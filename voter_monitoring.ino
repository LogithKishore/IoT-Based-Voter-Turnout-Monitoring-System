
int voterCount = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  voterCount++;
  Serial.print("Voter Count: ");
  Serial.println(voterCount);
  delay(5000);
}
