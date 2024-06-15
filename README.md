# Rotary Encoder Project

#### Project Overview
The Rotary Encoder project demonstrates how to interface a rotary encoder with an Arduino Mega to detect rotational movements and button presses. Rotary encoders are useful for applications where precise rotational control or user input is required.

#### Components Needed
- **Arduino Mega**
- **Rotary Encoder**
- **Jumper Wires**

#### Block Diagram


#### Circuit Setup
1. **Connecting the Rotary Encoder to Arduino Mega:**
   - **CLK_PIN:** Connected to digital pin 2 on the Arduino Mega.
   - **DT_PIN:** Connected to digital pin 3 on the Arduino Mega.
   - **SW_PIN:** Connected to digital pin 4 on the Arduino Mega.
   - **+V and GND:** Connected to 5V and GND on the Arduino Mega respectively.

#### Instructions
1. **Code Upload:**
   - Open the Arduino IDE and create a new sketch.
   - Copy and paste the provided Arduino code into the sketch.
   - Upload the code to the Arduino Mega.

2. **Testing:**
   - Open the Serial Monitor in the Arduino IDE (set to 9600 baud).
   - Rotate the rotary encoder clockwise and counterclockwise.
   - Press the encoder switch to see "Switch pressed!" messages.

#### Applications
- **Menu Selection:** Use the encoder for navigating menus.
- **Volume Control:** Adjust audio volume based on encoder rotation.
- **User Input:** Capture user input for parameter adjustments.

#### Notes
- **Interrupts:** Use of interrupts ensures accurate detection of encoder movements without missing steps.
- **Debounce:** A debounce delay is used to avoid false triggering of the encoder switch.

---

#### Useful Links
🌐 [ProjectsLearner](https://projectslearner.com/learn/arduino-mega-rotary-encoder)  
📧 [projectslearner@gmail.com](mailto:projectslearner@gmail.com)  
📸 [Instagram](https://www.instagram.com/projectslearner/)  
📘 [Facebook](https://www.facebook.com/projectslearner)  
▶️ [YouTube](https://www.youtube.com/@ProjectsLearner)  
📘 [LinkedIn](https://www.linkedin.com/in/projectslearner)  

Crafted for you with ❤️ from ProjectsLearner