#include<stdio.h>
#include<string.h>

int main(void){

    int digit_count = 0;
    int digit_sum = 0;

	int c = getchar();

	while( c != EOF ){
		// do thing
		if( c >= '0' && c <= '9' ){
			digit_count++;
			digit_sum = digit_sum + c - '0';
		}
		c = getchar();
	}

    // TODO
    // read in and get number and sum
    // of digits (numbers) in input
    

    printf("Input contained %d digits which summed to %d\n", digit_count, digit_sum );

    return 0;
}



