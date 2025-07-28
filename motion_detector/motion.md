# 🚨 Motion Detection System using PIR Sensor and Buzzer

This is a **motion detection project** using an **Arduino UNO**, a **PIR (Passive Infrared) sensor**, and a **buzzer**. The system detects movement and alerts with a buzzer and a message on the **Serial Monitor**.

---

## ✅ Components Used

- Arduino UNO  
- PIR Motion Sensor  
- Buzzer  
- Jumper Wires  

---

## 🔌 Circuit Connections

### PIR Sensor:
- `VCC` → 5V on Arduino  
- `GND` → GND on Arduino  
- `OUT` → Digital Pin `13` on Arduino  

### Buzzer:
- `+` (Positive) → Digital Pin `8` on Arduino  
- `–` (Negative) → GND on Arduino  

---

## 🧠 How It Works

- The **PIR sensor** detects motion by sensing changes in **infrared radiation** (usually body heat).
- When motion is detected:
  - The **sensor output goes HIGH**
  - The **Arduino reads this signal**
  - It **activates the buzzer**
  - Prints `"Motion detected"` on the **Serial Monitor**
- When **no motion is detected**:
  - The buzzer turns **OFF**
  - `"no motion"` is printed on the **Serial Monitor**

---
