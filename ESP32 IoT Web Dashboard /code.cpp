#include "DHTesp.h"
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

const int DHT_pin=15;
const int redLED = 12;
const int yellowLED = 13;
const int greenLED = 27;
const int buzzer = 14;
DHTesp dht;
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup(){
  Serial.begin(115200);
  dht.setup(DHT_pin,DHTesp::DHT22);
  pinMode(redLED, OUTPUT);
  pinMode(yellowLED, OUTPUT);
  pinMode(greenLED, OUTPUT);
  pinMode(buzzer, OUTPUT);
  lcd.init();
  lcd.backlight();
  lcd.setCursor(0, 0);
  lcd.print("System Ready");
  delay(1000);
  lcd.clear();
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
 lcd.clear();
 lcd.setCursor(0, 0);
 lcd.print("Temp: ");
 lcd.print(data.temperature);
 lcd.print(" C");

 lcd.setCursor(0, 1);
 lcd.print("Hum: ");
 lcd.print(data.humidity);
 lcd.print(" %");
}
