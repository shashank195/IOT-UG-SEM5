int LED =13;
const int gas = 0;
int Gaspin = A0;
void setup()
{
  Serial.begin(9600);
}

void loop()
{
  float sensorValue = analogRead(Gaspin);
  if(sensorValue>=300)
  {
    digitalWrite(LED, HIGH);
    Serial.print(sensorValue);
    Serial.println(" - smoke detected");
    delay(sensorValue);
  }
  else
  {
    digitalWrite(LED, LOW);
    Serial.println("Sensor Value : ");
    Serial.println("sensorValue");
  }
  delay(1000); // Wait for 1000 millisecond(s)
}