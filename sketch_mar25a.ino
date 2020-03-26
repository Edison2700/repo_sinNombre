const int relay = 2;
 char message;

 void setup() {
    pinMode(relay, OUTPUT);
    Serial.begin(9600);
 }
 void loop() {
  if (Serial.available() > 0) {
    message = Serial.read();
  }

  if (message == "E"){
    digitalWrite(relay, HIGH);
  } else if (message == "A"){
    digitalWrite(relay, LOW);
  }
 }
