// COMP1511 Tut 04  Exercise - scanf
// Examine the return value of scanf and look at reading
/// in in a loop
//
// Authors: tue11-brass & wed16-drum
// Written: 08/10/2019

#include <stdio.h>

int main(void){

    int variable;
    int result;

    result = scanf("%d", &variable);

    //printf("result - %d\n", result);
    //printf("variable - %d\n", variable);

    while( result == 1 ){

        printf("result - %d\n", result);
        printf("variable - %d\n", variable);
    result = scanf("%d", &variable);
        
    }

    return 0;
}
