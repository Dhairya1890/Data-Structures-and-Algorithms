#include<iostream>
using namespace std;


class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    Node(int data){
        this->data = data;
        prev = NULL;
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
        newNode->next = Head;
        Head->prev = newNode;
        Head = newNode;
    }
    return Head;
}

Node *InsertAtEnd(int value){
    Node *newNode = new Node(value);
    if(Head == NULL){
        Head = newNode;
    }
    else{
        Node *temp = Head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->prev = temp;
    }
    return Head;
}

void Display(){
    if(Head == NULL){
        cout<<"Nothing to print, Linked List is empty"<<endl;
    }
    else{
        Node *temp = Head;
        while(temp != NULL){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout<<endl;
        Node* temp1=temp->prev;
               cout<<endl;
        cout<<temp1->data<<" ";
    }
}

int main(){
    InsertAtBegin(10);
    InsertAtBegin(20);
    InsertAtBegin(30);
    InsertAtEnd(40);
    InsertAtEnd(50);
    Display();
}