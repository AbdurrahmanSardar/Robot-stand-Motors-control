# Robot-stand-Motors-control
In this repository I have controlled six motors which are used as robot hands three motors for each hand. These hands are having initial position and I have designed three unique consistent positions for the robot in order to react with humans nearby.This robot is using ultra-sonic sensor to sense humans nearby for specific amount of time and then turn of the tablet and move its hands to react with humans to acheive better experience. It was supposed to take information of initial angles and degree of freedome form a mechanical engineer in the same team but since I'm working alone I have taken 0 angle of all motors to be initail position. For the first position I have choosen 50 degrees for motor 1&4, 90 degrees for motor 2&5 and 150 degrees for motor 3&6. As it clearly shown that I have choosen symmetrical movement for hand but it is not essential to be symmetrical. For position two and three I have done the same but with different angles.

## CODING
First we have to include servo.h library and then to name these six motors and attach them to their port pins, after that I have used three bushbuttons each button for a position thus, three more analog pins were used and declared as input. Initial positions are written in set void. Then I have coded it such that if one of these buttons were activated then a position is done if else then return to initial position.

## ATTACHMENTS
Let me introduce all the attachments in this repository. There are several files with the following extensions: **brd** file of simulation, **ino** file which is an Arduino code and there are PNG files to show the simulation before and after running the simulation.

If you are working on this in real life please check for the connection of each element carefully as shown in the simulation file of the pictures attached before running for the safety of your tools
     
