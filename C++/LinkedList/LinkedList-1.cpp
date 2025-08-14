// Linked List - 1

// Linked List is an user defined dynamic linear data structure that helps storing data in memory blocks,
//  without needing to store them continuously like an array

// Detailed Introduction of Linked List can be found in c lang files of this repo

//Structure of Linked List in C++

#include<iostream>
using namespace std;

class Node{  // We need a class to make the basic structure of Node 
    public:  // Always remember to write access modifier 'public'
    int data, // this item stores the data
    Node *next; // this stores the reference to next node, set to NULL by default

    Node(int data){  // this is a parameterized contructor, called when an object 
                     // of the same class is made, this initializes the data field
                     // to the passed value, and sets the next pointer to null
        this.data = data; 
        next = NULL;
    }
};

Node *Head = NULL; //this is the first (type of) Node, but without any data field, 
                   // Used as the starting point to a Linked List

// Node(value) is just used to create a new node, it does not mean we have linked nodes 

// we can perform linking the nodes in two ways, 1. By a function like insertion, 2. Manually
void InsertAtBegin(int value){
    if(Head == NULL){
        Node *newNode = new Node(value);
        Head = newNode;
    }
    else{
        Node *newNode = new Node(value);
        Node *temp = Head;
        Head = newNode;
        newNode->next = temp
    }
}

void display(){
    if(Head == NULL){
        cout<<"Nothing to display - LL is empty"<<endl;
    }
    else{
        Node *temp = Head;
        while(temp != NULL){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
    }
}


