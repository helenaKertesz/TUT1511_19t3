
#include <stdio.h>

int main(void){

    char letter = 'A';
    int height = 0;

    printf("Enter height: ");
    scanf("%d", &height);

    int width = 0; // TODO

    // print out 2D grid
    int y = 0;
    int x = 0;
    while( y < height ){
        x = 0;
        while( x < width ){

            // TODO

            x++;
        }
        printf("\n");
        y++;
    }

    return 0;
}
