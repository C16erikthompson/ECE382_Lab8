#include <msp430.h> 
#include "roRe.h"
#include "sensorLibrary.h"

/*
 * main.c
 */
int main(void) {

	unsigned short sample[16];									// Just to analyze the values
	unsigned char i = 0;										// index into sample array
	unsigned short left;
	unsigned short center;
	unsigned short right;

	IFG1=0; 													// clear interrupt flag1
	WDTCTL = WDTPW + WDTHOLD;									// disable WDT

	BCSCTL1 = CALBC1_8MHZ;										// 8MHz clock
	DCOCTL = CALDCO_8MHZ;

	init_MSP();

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

} // end main

