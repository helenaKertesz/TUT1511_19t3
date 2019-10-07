// COMP1511 Tut 02  Exercise - rectangle
// Given the lengths of the two sides of a 
// rectangle print out the area.
//
// Authors: tue11-brass & wed16-drum
// Written: 24/09/2019
//



#include <stdio.h>

int main() {

	printf("Please enter rectangle length: ");

    int length;
	scanf("%d", &length);
	printf("Please enter rectangle width: ");

    int width;
	scanf("%d", &width);

    int area = width * length;
    printf("Area = %d\n", area);
	//printf("Area = %d\n", width * length); // this prints the same

    return 0;
}
