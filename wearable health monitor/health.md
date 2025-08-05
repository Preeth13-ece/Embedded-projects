# 🏥 Arduino Health Monitoring System

This project simulates a basic health monitoring system using **Arduino Uno**. It includes:

- **Temperature sensing** using LM35  
- **Heart rate simulation** using a potentiometer  
- **Step counting** using a pushbutton  
- **Status indication** with LEDs and buzzer  
- **Display output** using 16x2 LCD

Designed and tested in **Tinkercad**.

---

## 🔧 Components Used

| Component          | Quantity | Description                            |
|--------------------|----------|----------------------------------------|
| Arduino Uno        | 1        | Microcontroller                        |
| LM35 Temperature Sensor | 1   | Analog temperature sensor              |
| 16x2 LCD Display    | 1        | With or without I2C                    |
| Potentiometer       | 1        | Simulates analog heart rate input      |
| Pushbutton          | 1        | Simulates steps                        |
| Buzzer              | 1        | Sound alert                            |
| Red LED             | 1        | Alert indication                       |
| Green LED           | 1        | Normal condition indication            |
| 220Ω Resistor       | 2        | For LEDs                               |
| 10kΩ Resistor       | 1        | Pull-down for pushbutton               |
| Breadboard + Jumper Wires | – | For circuit assembly                   |

---

## ⚙️ Circuit Connections

| Component      | Arduino Pin(s)                      | Notes                                     |
|----------------|-------------------------------------|-------------------------------------------|
| **LM35**        | Vout → A0, Vcc → 5V, GND → GND     | Analog temperature input                  |
| **Potentiometer** | Middle pin → A1                  | Simulates heart rate                      |
| **Pushbutton**   | One side → pin 2, other → GND     | 10kΩ pull-down to GND                     |
| **Buzzer**       | + → pin 10, – → GND               | For alerts                                |
| **Red LED**      | Anode → pin 11, Cathode → GND via 220Ω | Alert LED                          |
| **Green LED**    | Anode → pin 12, Cathode → GND via 220Ω | Normal LED                        |
| **LCD (16x2)**   | RS → 7, E → 6, D4 → 5, D5 → 4, D6 → 3, D7 → 8 | +Vcc, GND, contrast via 10kΩ pot  |

> 💡 *If using I2C LCD, connect SDA → A4, SCL → A5, and include `LiquidCrystal_I2C` library instead.*

## ✅ Features

- Real-time temperature monitoring  
- Simulated heart rate and step count  
- Alerts using buzzer and LEDs  
- LCD output for easy readability  
- Fully compatible with Tinkercad simulation

---

## 🧪 Future Improvements

- Real heart rate sensor (e.g., pulse sensor)
- Real step tracking with accelerometer
- Wireless data transmission (Bluetooth/Wi-Fi)
- OLED display for compact design
