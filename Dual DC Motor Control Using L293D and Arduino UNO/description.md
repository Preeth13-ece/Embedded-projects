## 🔧 Description of the Circuit
This setup uses an Arduino UNO with an L293D motor driver IC to control two DC motors. The motors are connected in such a way that they can rotate in one direction.

## Key Components:
Arduino UNO

L293D Motor Driver IC

Two DC Motors

Wires and external power (optional)

## Working:
The L293D receives signals from Arduino pins to control the motors.

Motor A is connected to pins 8 and 7 of the Arduino.

Motor B is connected to pins 3 and 2.

The code sets one pin of each motor HIGH and the other LOW, causing both motors to rotate forward continuously.

