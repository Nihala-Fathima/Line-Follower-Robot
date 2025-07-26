# Line-Follower-Robot
A line-following robot is an autonomous vehicle designed to navigate along a predefined path, typically a black line on a white surface. This robot utilizes infrared (IR) sensors to detect the line and adjusts its movement accordingly

🔧 Hardware Components
Arduino UNO – Main controller

2 IR Sensors – Detect black line and surface edges

L298N Motor Driver – Controls motor direction and speed

2 BO DC Motors – Drive the robot

Chassis Frame – Mounts components

Rubber Wheels – Provide traction

9V Battery / Li-ion Pack – Powers the system

Jumper Wires, Switch, Buzzer (optional) – For connections and alerts

🌟 Key Features
Line detection using 2 IR sensors

Real-time directional correction

Basic but effective path following

Great for learning embedded systems

🔍 How It Works 
Both sensors on white – Robot stops or searches for line

Left sensor on black, right on white – Robot turns left

Right sensor on black, left on white – Robot turns right

Both sensors on black – Robot moves forward

Arduino constantly checks sensor values and sends commands to the motor driver to adjust wheel movements.
