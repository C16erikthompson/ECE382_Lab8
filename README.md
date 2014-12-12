ECE382_Lab8
===========
#Prelab

Schematic
Same schematic for locomotion utilized in Lab 6, same schematic for ADL utilized in lab 7.  Combine them for lab 8
Pseudo Code
•	Move forward until front sensor notices a wall (while front censor is false), then stop [moveForward(), checkFront()] 
•	Rotate 90 degrees to the left, check front sensor for wall [rotateLeft(), checkFront()]
o	If no wall, go forward until wall
•	Rotate 180 degrees to the right, check front sensor for wall [rotateRight(), checkRight()]
o	If no wall, go forward until wall
•	Repeat

Alternate Turn
•	Smaller turns checking the right and left censors to check to see when “essentially” parallel
o	Use measured voltages from A functionality of Lab 7 to check for distances
Notes
•	Use the movement commands from Lab 6 to control the movements of the robot
•	Test various rotation distances to find those that most closely correspond to 90 and 180 degrees
•	Possibly “Follow” the left wall if straight movement becomes an issue
o	Utilize left sensor to ensure the value read in stays above a specific voltage
•	Decrease PWM speed for more precision

# Algorithm
# A Functionality
http://vid47.photobucket.com/albums/f189/erik_thompson2/VID_20141208_222112_5452_zpsyyl8yglu.mp4
