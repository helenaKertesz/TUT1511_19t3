#include<stdio.h>

int main(){

    int x = 0;
    int y = 0;

    while( y < 5){
        x = 0;
        while( x < 5){
            printf("*");
            x++;
        }
        printf("\n");
        y++;
    }

}
