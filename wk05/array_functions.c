// playing with some functions that are given arrays

#include<stdio.h>

void print_array(int n, int array[n]);
int array_length(int nums[]);
int test_all_initialized(int nums[]);
int scanf_array(int n, int array[n]);

int main(){

    int array[5] = {1, 2, 3, 4, 5};

    print_array(5, array);

    //int num_scanned = scanf_array(5, array);
    //printf("%d numbers scanned, array is now: ", num_scanned);
    //print_array(5, array);

    return 0;
}

// prints out an array
void print_array(int n, int array[n]){
}

// given an array, returns its length
int array_length(int nums[]){
}

// given an array, returns 1 if all elements
// are initialised and 0 otherwise
int test_all_initialized(int nums[]){
}

// scans integers into an array and returns
// the number of inetegers read in
int scanf_array(int n, int array[n]){
}
