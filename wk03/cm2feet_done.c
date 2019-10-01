// COMP1511 Tut 03  Exercise - cm to feet
// Give a height in cm convert it to a height in feet
// there are 2.54 cm in and inch and 12 inches in a foot
//
// Use only INT variables
//
// Authors: tue11-brass
// Written: 01/10/2019
//

#include <stdio.h>

#define INCHES_IN_FOOT 12
#define CM_IN_INCH     2.54
#define CM_IN_FOOT     (CM_IN_INCH * INCHES_IN_FOOT)

int main(void){

    int heightInCm;
    int heightInFeet;

    printf("Enter your height in cm: ");
    scanf("%d", &heightInCm );

    heightInFeet = heightInCm/ CM_IN_FOOT;
    printf("%d\n", heightInFeet);

    return 0;
}
