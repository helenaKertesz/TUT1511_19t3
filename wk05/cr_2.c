// Name: Prajakta Ghatpande (z5264980)
// Description: Reads positive integer and prints its factors, 
// their sum and if the number is a perfect number
// Date: 9.10.2019

#include<stdio.h>

int main (void){

    int num = 0;
    int counter = 1;
    int sum = 0;
    
    printf("Enter number: ");
    scanf("%d", &num);
    
    printf("The factors of %d are: \n", num);
    
    while (counter <= num) {
        if (num % counter == 0) {
            printf("%d\n", counter);
            sum = counter + sum;
        }
        counter++;
    }printf("Sum of factors = %d\n", sum);
    if (num == sum - num){
        printf("%d is a perfect number\n", num);
    }else {
        printf("%d is not a perfect number\n", num);
    }
    return 0;
}
