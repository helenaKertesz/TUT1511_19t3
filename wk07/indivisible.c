#include<stdio.h>

int main(){
    

    int input[1000];

    int i = 0;
    while( scanf("%d", &input[i]) == 1 ){
        i++;
    }

    int num_read = i;

    printf("Indivisible numbers are:");
    
    i = 0;
    int j = 0;
    int is_indivisible = 1;
    while( i < num_read ){
        
        is_indivisible = 1; // asume is indivisible

        // looking through all the numbers
        j = 0;
        while( j < num_read ){
            
            if( i != j && (input[i] % input[j]) == 0 ){
                is_indivisible = 0;
            }
            j++;
        }

        if( is_indivisible ){
            printf(" %d", input[i]);
        }
        i++;
    }

    printf("\n");

}
