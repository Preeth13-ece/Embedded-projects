#include "DHTesp.h"

const int DHT_pin=15;
const int redLED = 12;
const int yellowLED = 13;
const int greenLED = 27;
const int buzzer = 14;
DHTesp dht;

void setup(){
  Serial.begin(115200);
  dht.setup(DHT_pin,DHTesp::DHT22);
  pinMode(redLED, OUTPUT);
  pinMode(yellowLED, OUTPUT);
  pinMode(greenLED, OUTPUT);
  pinMode(buzzer, OUTPUT);
}

void loop(){
  TempAndHumidity data=dht.getTempAndHumidity();

  Serial.println("Temp: ");
  Serial.println(data.temperature);
  Serial.println("°C  |  Humidity: ");
  Serial.println(data.humidity);
  Serial.println("%");
  delay(2000);

  digitalWrite(redLED, LOW);
  digitalWrite(yellowLED, LOW);
  digitalWrite(greenLED, LOW);
  digitalWrite(buzzer, LOW);

  if (temp > 35) {
  digitalWrite(redLED, HIGH);
  digitalWrite(buzzer, HIGH);
  }
// Humidity alert
  else if (hum < 40) {
  digitalWrite(yellowLED, HIGH);
  }
// Normal condition
  else {
  digitalWrite(greenLED, HIGH);
 }
}
