/* A Dice checking app
Marc Chee September 2019

This will take dice roll numbers from a user
and add them together.

It will then check if the roll total is higher
or lower than a secret target number
*/

#include <stdio.h>

#define EXIT_SUCCESS 0
#define SECRET_VALUE 7

int correctValue( int rolledNum, int diceSize );

int main(void) {
    int dieOne = 0;
    int dieTwo = 0;
    int diceSize = 6;

    // Ask the user for the size of the dice
    printf("How many sides are on the dice?\n");
    scanf("%d", &diceSize);

    // Get user input for dice rolls
    printf("Please type in the result of the first die:\n");
    scanf("%d", &dieOne);
    dieOne = correctValue( dieOne, diceSize );

    printf("Please type in the result of the second die:\n");
    scanf("%d", &dieTwo);
    dieTwo = correctValue( dieTwo, diceSize );

    printf("You rolled %d and %d\n", dieOne, dieTwo);

    // create total and check against the secret number
    int total = dieOne + dieTwo;

    printf("The total is %d\n", total);

    if (total > SECRET_VALUE) {
        // total is higher than SECRET_VALUE
        printf("You succeeded!\n");
    } else if (total == SECRET_VALUE) {
        // total is tied with SECRET_VALUE
        printf("An exact tie!\n");
    } else {
        // total is lower than SECRET_VALUE
        printf("You failed!\n");
    }

    return EXIT_SUCCESS;
}


// given - dice number, dice size
// return - the corrected value
int correctValue( int rolledNum, int diceSize ){

    if (rolledNum < 1 || rolledNum > diceSize) {
        printf("%d was invalid, ", rolledNum);

        // Use mod to give a value inside the range 1-dice size
        rolledNum = rolledNum % diceSize;
        if (rolledNum == 0) {
            rolledNum = diceSize;
        }
        printf("and has been corrected to %d.\n", rolledNum);
    }

    return rolledNum;
}



