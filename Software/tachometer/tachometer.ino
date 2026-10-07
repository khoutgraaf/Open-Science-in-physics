int quarter_revolutions;
int ledPin = 12;
unsigned int rpm;
unsigned long timeold;
unsigned long now;

void setup() {
  Serial.begin(9600);
  attachInterrupt(0, magnet_detect, RISING);
  quarter_revolutions = 0;
  rpm = 0;
  timeold = 0;
  pinMode(ledPin, OUTPUT);
}

void loop() {
  if (quarter_revolutions >= 10) { 
    now = millis();
    rpm = (quarter_revolutions * 60000.0) / ((now - timeold) * 4);
    timeold = now;
    quarter_revolutions = 0;
    Serial.print("RPM: ");
    Serial.println(rpm,DEC);
  }
}

void magnet_detect() {
  unsigned long now = millis();
  quarter_revolutions++;
  Serial.print("Signal detected at timestamp: ");
  Serial.print(now);
  Serial.println("ms");
}