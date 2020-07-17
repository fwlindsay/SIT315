int buttonState = 0;

void setup()
{
  pinMode(2, INPUT);
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  // assign pin to port 4
  buttonState = digitalRead(4);
  // if sensor detects motion, pin 4 will go HIGH
  if (buttonState == HIGH) {
    digitalWrite(13, HIGH);
    Serial.println("Active!");
  } else {
    digitalWrite(13, LOW);
    Serial.println("Inactive");
  }
  delay(100); // A nice delay otherwise serial port will go nuts
}