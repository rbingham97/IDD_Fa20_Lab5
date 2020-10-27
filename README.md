# IDD_Fa20_Lab5

## Initial Idea
Working on an admittedly over-the-top extension for this assignment: I've built an Arduino-controlled robotic arm and am going to attach a photocell to it, then train the robot to look for a flashlight with gradient descent and grab the flashlight. Given how ambitious this is, it's going to take a little extra time, but [here](https://youtu.be/5FDqHaAYwUk) is a sneak peak!

## Second Pass

Since my initial idea was honestly a robotics project, I'm splitting the purely robotics work off into a personal project to do in my free time. For this lab, I'm going to make the robot into a two-state, light-activated dancing machine. 

This project uses an Arduino Braccio robot I got this summer as a practice platform for my robotic motion planning work. I built the robot from the Braccio kit back in August but had not gotten around to implementing anything with it until this lab. I saw this assignment as an opportunity to kill two birds with one stone: getting the Braccio up and running and also fulfilling each part of the lab specifications. 

The lab specifies five categories of skill building a project should cover:

**For this week’s lab, you will design and build an autonomous device that incorporates:**

* Physical Fabrication -> building the robot, soldering and mounting the sensor electronics, building a stable mount for the arm
* Actuation -> the Braccio runs on 6 TowerPro 1080 servo motors, just like those from the lab kit but larger
* Sensing/Input -> the robot's behavior is controlled as a two-state FSM, with state determined by a threshold sensed by a photocell glued to the 'wrist'
* Timing -> the robot executes a series of timed motions in the dance state, and the FSM is separated by timed blocks
* Sound -> the robot dances to music

The Braccio goes along with an Adafruit library that provides functions for setting the robot's position, so much of the code to get it to make simple motions is taken care of by calling the Braccio.ServoMovement() method, which takes in a parameter that sets the movement speed and 6 joint angles for each of the joints. The rest of the code is also pretty straightforward -- the sketch just reads from the photocell to determine whether to call its rest() routine or the dance() routine, with the threshold set to 800 to achieve rest in a dim room and dance under a flashlight. The rest() routine resets the position to make the arm stand straight up, while the dance() routine cycles through 5 preset dance moves that I tuned to make it look nice and groovy. 

From a FSM perspective, the system largely just sits in state 0 (rest) until it gets a single input above the threshold, which moves it to state 1 (dance) for one dance cycle, after which it returns to state 0 for another threshold check. 

This was a really fun project, and was definitely happy that the lab instructions left headroom to make the interactive device setup my own. 

Here's a photo of the robot setup, with the photocell peeking out in the middle of the jaws at the top:

<img src="/IMG_4533.JPG" alt="roboPic" width="300"/>


See video of the systme in action [here](https://youtu.be/P_Yf80T1qOk).
