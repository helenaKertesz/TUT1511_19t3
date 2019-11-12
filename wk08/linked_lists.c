#include<stdio.h>
#include<stdlib.h>

struct overall {
    struct node *start;
};

struct node {
    int data;
    struct node *next;
};

struct node *new_node(int data);
void insert_at_end(struct overall *o, int data);
void print_list(struct overall *o);



int main(void){
    struct overall* o = malloc(sizeof(struct overall));
    o -> start = NULL;
    
    print_list(o);

    insert_at_end(o, 5);
    print_list(o);
    
    insert_at_end(o, 4);
    print_list(o);
    
    insert_at_end(o, 6);
    print_list(o);

	free(o);

    return 0;
}
/*
struct node {
    int data;
    struct node *next;
};
*/

// create a new node with certain data 
// and return a pointer to it
struct node *new_node(int data) {
	
	struct node *new = malloc( sizeof(struct node));
	
	new->data = data;
	new->next = NULL;

    return new;
}

// insert a given node at the end of the list
void insert_at_end(struct overall *o, int data) {
	
	struct node* new = new_node(data);
	
	//o->start->next->next
	if( o->start == NULL ){
	
		o->start = new;
	
	} else {
		struct node* curr = o->start;
		while( curr->next != NULL ){
			free(curr);
			curr = curr->next;
		}
		curr->next = new;
	}
	
}













void print_list(struct overall *o){
    
    if( o != NULL ){
        struct node* curr = o->start;
        while( curr != NULL ){
            printf("%d -> ", curr->data );
            curr = curr->next;
        }
    }

    printf("X\n");

}
