##Components Used:
Arduino Uno

PIR Motion Sensor

Buzzer

Jumper Wires

🔌## Connections:
PIR Sensor:
VCC → 5V on Arduino

GND → GND on Arduino

OUT → Digital pin 13 on Arduino

Buzzer:
+ (Positive) → Digital pin 8 on Arduino

– (Negative) → GND on Arduino

🧠 ##How It Works:
The PIR sensor detects motion by sensing changes in infrared radiation (body heat).

When motion is detected:

The sensor's output goes HIGH.

The Arduino reads the signal, triggers the buzzer, and prints "Motion detected" on the Serial Monitor.

If no motion is detected, the buzzer is turned off and "no motion" is printed.
