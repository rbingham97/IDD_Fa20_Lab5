# IDD_Fa20_Lab5

## Initial Idea
Working on an admittedly over-the-top extension for this assignment: I've built an Arduino-controlled robotic arm and am going to attach a photocell to it, then train the robot to look for a flashlight with gradient descent and grab the flashlight. Given how ambitious this is, it's going to take a little extra time, but [here](https://youtu.be/5FDqHaAYwUk) is a sneak peak!

## Second Pass

Since my initial idea was honestly a robotics project, I'm splitting the purely robotics work off into a personal project to do in my free time. For this lab, I'm going to make the robot into a two-state, light-activated dancing machine. 

I glued the photocell to the base of the robot's gripper arm and wired it up with the other motor cables down to my Arduino UNO with a 10K pulldown resistor just like in Lab 4. The robot's behavior falls into two states: when the photocell senses only darkness, the arm sits straight up and does not dance. As soon as you start shining a light at the head (a la flashing lights at a club or party), the robot plays a jingle on repeat and executes a preprogrammed dance sequence. 

See video of this in action [here](https://youtu.be/P_Yf80T1qOk). This video is of it dancing to music from my speaker because that's way cooler, but the jingle is easy enough with the Arduino PWM pins (like Lab 2). 
