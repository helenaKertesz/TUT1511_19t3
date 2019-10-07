// COMP1511 Tut 03 Exercise
//
// Given a start and end number, print all
// numbers divisible by 7 in order between the two
//
// Authors:
// Helena Kertesz (z5059868@unsw.edu.au)
// tue13-brass and wed16-drum
//
// Written: 29/09/2019


#include<stdio.h>

int main(){
	
	int start = 0;
	int end = 0;
	
	printf("Enter start: ");
	scanf("%d", &start);
	printf("Enter end: ");
	scanf("%d", &end);
	
	int counter = start;
	
	
	while( counter <= end  ){
        if( counter % 7 == 0 ){
            printf("%d\n", counter);
        }
		counter = counter + 1;
	}

	return 0;
}
