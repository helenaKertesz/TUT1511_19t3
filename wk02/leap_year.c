// COMP1511 Tut 02  Exercise - leap year
// Given a year, print out if it is or isn't a leap year
// The logic used comes from:
// https://en.wikipedia.org/wiki/Leap_year
//
// Authors: tue11-brass & wed16-drum
// Written: 24/09/2019

#include <stdio.h>

int main(){


	int year;
	printf("Please enter a year: ");
	scanf("%d", &year );

	if( year % 4 != 0 ){
		printf("Not a leap year\n");
	} else if(year % 100 != 0) {
		printf("Is a leap year\n");
	} else if(year % 400 != 0){
		printf("Not a leap year\n");
	} else {
		printf("Is a leap year\n");
	}

	return 0;
}
