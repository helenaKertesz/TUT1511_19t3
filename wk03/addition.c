// COMP1511 Lab 02 Exercise - Addition
//
// Takes in to integers and prints out the sum
//
// Authors:
// Helena Kertesz (z5059868@unsw.edu.au)
//
// Written: 29/09/2019

#include<stdio.h>

int main(void){

	int num1 = 0;
	int num2 = 0;

    printf("Please enter two integers: ");
    scanf("%d %d", &num1, &num2);

	int total = num1 + num2;
    printf("%d + %d = %d\n", num1, num2, total);

    return 0;
}
