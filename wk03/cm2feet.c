// COMP1511 Tut 03  Exercise - cm to feet
// Give a height in cm convert it to a height in feet
// there are 2.54 cm in and inch and 12 inches in a foot
//
// Use only INT variables
//
// Authors: tue11-brass & wed16-drum
// Written: 01/10/2019
//

#include <stdio.h>

#define CM_IN_INCH     2.54
#define INCHES_IN_FOOT 12
#define CM_IN_FOOT     (CM_IN_INCH * INCHES_IN_FOOT)
// I could have just put a number here rather than
// using the #defines

int main(void){

	int height_in_cm;
	int height_in_feet;

	printf("Enter your height in centimetres: ");
	scanf("%d", &height_in_cm);

	height_in_feet = height_in_cm / CM_IN_FOOT;

	printf("Your height in feet is %d\n", height_in_feet);

    return 0;
}












