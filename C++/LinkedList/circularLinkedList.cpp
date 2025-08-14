//Circular Linked Lists are just normal LL but with connections between the first and the last node direclty
// Means After reaching the end of the LL, there's no real end, we can go to the first node, and if the previous nodes are empty we can fill them with data;
#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    Node(int data){
        this->data = data;
        next = NULL;
    }
};

Node *Head = NULL;

Node *InsertAtBegin(int value){
    Node* newNode = new Node(value);
    if(Head == NULL){
        Head = newNode;
    }
    else{
        Node *temp = Head;
        Head = newNode;
        newNode->next = temp;
    }
    return Head;
}