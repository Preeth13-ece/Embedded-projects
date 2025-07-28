// Soil Moisture Based Motor Control System

#define motorPin1 9      // L293D Input 1
#define motorPin2 10     // L293D Input 2
#define sensorPin A0     // Soil Moisture Sensor Analog Pin
int sensorValue = 0;     // Variable to store sensor value
int threshold = 400;     // Moisture threshold (adjust as needed)

void setup() {
  pinMode(motorPin1, OUTPUT);
  pinMode(motorPin2, OUTPUT);
  Serial.begin(9600); // Start Serial Monitor
}

void loop() {
  sensorValue = analogRead(sensorPin); // Read soil moisture
  Serial.print("Soil Moisture: ");
  Serial.println(sensorValue);

  if(sensorValue < threshold) {
    // Soil is dry → turn motor ON
    digitalWrite(motorPin1, HIGH);
    digitalWrite(motorPin2, LOW);
    Serial.println("Motor ON - Watering Plant");
  } else {
    // Soil is wet → turn motor OFF
    digitalWrite(motorPin1, LOW);
    digitalWrite(motorPin2, LOW);
    Serial.println("Motor OFF - Soil Moist");
  }

  delay(1000); // Wait 1 second before next reading
}
