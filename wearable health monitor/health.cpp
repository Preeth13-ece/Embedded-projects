#include <LiquidCrystal.h>

LiquidCrystal lcd(7, 6, 5, 4, 3, 8);

const int tempPin = A0;
const int heartPin = A1;
const int buttonPin = 2;
const int buzzerPin = 10;
const int redLEDPin = 11;
const int greenLEDPin = 12;

int stepCount = 0;

void setup() {
  lcd.begin(16, 2);
  pinMode(buttonPin, INPUT);
  pinMode(buzzerPin, OUTPUT);
  pinMode(redLEDPin, OUTPUT);
  pinMode(greenLEDPin, OUTPUT);
  lcd.print("Health Monitor");
  delay(2000);
  lcd.clear();
}

void loop() {
  // Temperature reading
  int tempRaw = analogRead(tempPin);
  float voltage = tempRaw * 5.0 / 1023.0;
  float temperature = voltage * 100.0;

  // Heart rate (simulated)
  int heartRate = map(analogRead(heartPin), 0, 1023, 60, 120);

  // Step counter logic
  if (digitalRead(buttonPin) == HIGH) {
    stepCount++;
    delay(250); // simple debounce
  }

  // Display values
  lcd.setCursor(0, 0);
  lcd.print("Temp:");
  lcd.print(temperature, 1);
  lcd.print("C");

  lcd.setCursor(0, 1);
  lcd.print("HR:");
  lcd.print(heartRate);
  lcd.prin
