# Soil Moisture Detection and Motor Control System

This project is an automatic irrigation system using an Arduino UNO, a soil moisture sensor, and a DC motor. The system automatically waters plants when the soil becomes dry.

## 🌱 Components Used

- Arduino UNO
- Soil Moisture Sensor
- L293D Motor Driver IC
- DC Motor / Water Pump
- Power Supply (5V)
- Jumper Wires
- Breadboard (optional)

## 🔌 Circuit Connections

### Soil Moisture Sensor:
- VCC → 5V (Arduino)
- GND → GND (Arduino)
- A0 → A0 (Arduino)

### L293D Motor Driver:
- Pin 1 (Enable 1) → 5V
- Pin 2 → Digital Pin 9 (Arduino)
- Pin 3 → Motor terminal 1
- Pin 4 & 5 → GND
- Pin 6 → Motor terminal 2
- Pin 7 → Digital Pin 10 (Arduino)
- Pin 8 → 5V power for motor

### DC Motor:
- Connected to L293D output pins 3 and 6

## ⚙️ Working Principle

- The soil moisture sensor detects the moisture level of the soil.
- When the moisture is **below a threshold**, the Arduino turns ON the motor to water the plant.
- When the soil is **wet enough**, the motor is turned OFF automatically.
