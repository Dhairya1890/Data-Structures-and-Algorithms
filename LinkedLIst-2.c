#include<stdio.h>
#include<stdlib.h>



struct Node{
    int data;
    struct Node* next;
};


struct Node* head = NULL; //This is a head, which is currently pointing to nothing, meaning the LL is empty
//Function to create a node, in order to insert values 
struct Node* new_node(int value){   // Declaring a function of type "struct Node" ---> Because it is a function to create and return the struct Node data type
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));  // Structural Pointer Declaring a variable temp --> this is our node. allocating a memory location to newly made node
    temp->data = value;   // Assigning value to item data, -> operator is used when working with pointer to structures, Used to access the members of a structure through a pointer
    temp->next = NULL;    // Assigning NULL to next 
    return temp;          // Returing temp - Basically returing the new node
}


// -> is used with struct pointer
// . is used with struct variable 

void insertAtBeginning(int value){
    struct Node* temp = new_node(value);
    temp->next = head;
    head = temp;
}

// ------------------------------------------------------------------NOTE--------------------------------------------------------------
// If head is not declared globally                                                                                                    |
// Use of struct Node** (pointer to pointer) - We use double pointer so that we can modify the original head pointer inside a function | 
                                                                                                                                //     |
// If you pass only struct Node*, any change to head inside the function won't affect the original in main()                           |
// ------------------------------------------------------------------------------------------------------------------------------------

//-------------------------------------------------------------------NOTE--------------------------------------------------------------
//If head is declared globally                                                                                                         |
// No need to pass head, just pass value argument, But need to declare                                                                 |
// struct Node* head = NULL; outside main()                                                                                            |
//-------------------------------------------------------------------------------------------------------------------------------------

void display(){
    struct Node* temp = head; // temp variable to control traversal
    while(temp != NULL){
        printf("%d ",temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main(){
    insertAtBeginning(10);
    insertAtBeginning(20);
    insertAtBeginning(30);

    display();
    return 0;
}