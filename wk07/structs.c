// Playing around with structs

#include<stdio.h>
#include<string.h>

#define MAX_NAME_LEN 100
#define MAX_TYPE_LEN 100


// name, type, age, wiegfht
// TODO design struct
struct pet {
	char name[MAX_NAME_LEN];
	char type[MAX_TYPE_LEN];
	int age;
	int weight;
	
};

void excercise( struct pet* my_pet );
void set_up_pet( struct pet* my_pet );

int main(){
    // TODO make fluffy
    struct pet my_pet;
    
    my_pet.age = 10;
    my_pet.weight = 4;
    strcpy( my_pet.name , "Fluffy" );
    strcpy( my_pet.type , "Axolotyl" );
    
    // set up pet function

	// pass to function
	excercise( &my_pet );
	
	printf("weight is now %d\n", my_pet.weight);

    return 0;
}

// TODO make weight function
void excercise( struct pet* my_pet ){

	(*my_pet).weight--;
	//my_pet->weight--;
}

// set up pet function
void set_up_pet( struct pet* my_pet ){
	fgets( my_pet->name, MAX_NAME_LEN, stdin);
	
}




