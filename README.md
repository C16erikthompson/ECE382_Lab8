ECE382_Lab8
===========
#Prelab
###Schematic
Same schematic for locomotion utilized in Lab 6, same schematic for ADL utilized in lab 7.  Combine them for lab 8.
![alt tag](http://i47.photobucket.com/albums/f189/erik_thompson2/IMG_20141212_155614_0811_zpsf01f22aa.jpg
 "TO-220 Config")
###Pseudo Code
•	Move forward until front sensor notices a wall (while front censor is false), then stop [moveForward(), checkFront()]   
•	Rotate 90 degrees to the left, check front sensor for wall [rotateLeft(), checkFront()]   
o	If no wall, go forward until wall   
•	Rotate 180 degrees to the right, check front sensor for wall [rotateRight(), checkRight()]    
o	If no wall, go forward until wall   
•	Repeat    

####Alternate Turn
•	Smaller turns checking the right and left censors to check to see when “essentially” parallel   
o	Use measured voltages from A functionality of Lab 7 to check for distances    
###Notes
•	Use the movement commands from Lab 6 to control the movements of the robot    
•	Test various rotation distances to find those that most closely correspond to 90 and 180 degrees    
•	Possibly “Follow” the left wall if straight movement becomes an issue   
o	Utilize left sensor to ensure the value read in stays above a specific voltage    
•	Decrease PWM speed for more precision   

# Algorithm
~~~
while(1) {

		if (getCenter() < 0x01BC) //if the robot is far away from a wall, move forward
			sShortForward();
		else{                     //if the robot is close to the wall, turn right about 90 degrees
			sShortRight();
		sShortRight();}
		if (getLeft() < 0x01DD)   // if the robot is getting too far away from the left wall, turn slightly towards it and move forward
		{
			sShortLeft();
			sShortForward();

		}
		else if (getLeft() > 0x0250) // if the robot is getting too close to the wall, turn slightly right and move forward
		{
			sShortRight();
			sShortForward();

		}


	} // end infinite loop
~~~
# A Functionality
http://vid47.photobucket.com/albums/f189/erik_thompson2/VID_20141208_222112_5452_zpsyyl8yglu.mp4

# Challenges
- My robot could not move in a straight line, so I had to make it move rather slow so that it could constantly check the sensors
- I had issues with the sensors picking up too much voltage or being unable to distinguish distance very well, so I had to reblind them
- One robot I was using eventually became unable to turn its right wheel in accordance with the programming, so i had to build my design on another robot eventually

#Documentation
None
