// playing around with pointers :)

#include<stdio.h>

int main(){
/*
    int a = 7;
    printf("\"int a = 7\"\n");

    printf("a has value %d and address %p\n\n"
    	, a, &a);

    int* b = &a;
    printf("\"int* b = &a\"\n");
    printf("b is a pointer to a\n");
    printf("b has value %p and address %p\n"
    	, b, &b);
    	*/
   int array[5] = {0};
   
   fill_array(5, array);


    return 0;
}

void fill_array(int size, int bob[]){
	bob[0] = 4;
}



















