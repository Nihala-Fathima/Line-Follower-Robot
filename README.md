# Line-Follower-Robot
A line-following robot is an autonomous vehicle designed to navigate along a predefined path, typically a black line on a white surface. This robot utilizes infrared (IR) sensors to detect the line and adjusts its movement accordingly

🔧 Hardware Components
Microcontroller
The brain of the robot. Usually an Arduino UNO or Nano. You can go advanced with an ESP32 for extra features like Wi-Fi or Bluetooth.

IR Sensors
These are the robot’s eyes. They detect the contrast between the black line and the white surface. TCRT5000 modules are commonly used.

Motor Driver Module
Acts like the muscles' control center. It receives commands from the microcontroller and tells the motors when and how to move. Common ones include L298N or L293D.

DC Motors
The driving force (literally). Two BO motors are typically used to move the wheels.

Chassis
The body or frame where all components are mounted. You can use an acrylic sheet, 3D printed base, or even a wooden board if you're feeling crafty.

Wheels
Mounted onto the motors, they let the robot roll around. Rubber ones are preferred for better grip.

Power Supply
A 9V battery or a rechargeable Li-ion battery pack powers the whole system. If you’re using ESP32, a power bank via USB works great too.

Other Accessories
Jumper wires, a breadboard or PCB, an on/off switch, and optionally, a buzzer (for dramatic beeping when it veers off the line 😎).

🌟 Key Features
Detects and follows a black line on a white surface (or vice versa).

Uses real-time sensor feedback to adjust motor direction.

Beginner-friendly, quick to prototype, and totally scalable.

Works even with basic logic, but can be upgraded to include advanced features.

Smooth operation with proper tuning (or hilariously chaotic if you don’t – great for a laugh).

🔍 How It Works – Step by Step
Sensing the Line
The IR sensors continuously emit infrared light. When that light hits a white surface, it reflects back. If it hits a black line, it gets absorbed. This gives a digital output – 1 for white, 0 for black.

Reading the Inputs
The microcontroller checks the sensor values constantly. Based on the combination of left and right sensor readings, it determines whether the robot is centered on the line, drifting left, or drifting right.

Controlling the Movement
If both sensors detect black, the robot moves forward.
If the left sensor detects white and the right detects black, it turns right.
If the right sensor detects white and the left detects black, it turns left.
If both sensors see white (line lost!), it stops or performs a search maneuver.

Real-Time Correction
This checking and adjusting happens many times per second. That’s what lets the robot follow even curved paths.
