# 🔍 Face Recognition with Arduino and Python (CVZone)

This project demonstrates a **real-time face recognition system** integrating a **PC webcam**, **Python (CVZone + OpenCV)**, and an **Arduino**. Based on face detection results, it controls an LED via Arduino:
- 🟢 Green LED when a face is detected
- 🔴 Red LED when no face is detected

## 📸 Features

- Real-time face detection using your computer webcam
- Uses Python, OpenCV, and the CVZone library
- Serial communication with Arduino (USB)
- Physical LED control based on recognition results

---

## 🛠️ Components Used

| Component         | Description                            |
|------------------|----------------------------------------|
| Arduino Uno/Nano | Microcontroller board                  |
| Webcam           | PC or USB webcam                       |
| 2 LEDs           | Green and Red for visual indication    |
| Resistors        | 220Ω for each LED                      |
| Jumper Wires     | For circuit connections                |
| Breadboard       | For prototyping                        |

---

## 📷 System Overview

1. Webcam captures a video stream.
2. Python script detects faces using `cvzone` and `opencv`.
3. If a face is detected:
   - Python sends `'1'` over serial.
   - Arduino turns on **Green LED**, turns off **Red LED**.
4. If no face:
   - Python sends `'0'`.
   - Arduino turns on **Red LED**, turns off **Green LED**.

---

## 🔌 Circuit Diagram

[Webcam] --> [PC Running Python]
|
v
[USB Serial Connection]
|
v
[Arduino --> LEDs]
- Pin 13: Green LED
- Pin 12: Red LED
##  Works like this 
![image](https://github.com/user-attachments/assets/90e0d1ab-cf86-4384-ab3f-e4bd2682a737)
![image](https://github.com/user-attachments/assets/a55d0d05-a45e-4e73-87bb-3d7239d58d3e)

