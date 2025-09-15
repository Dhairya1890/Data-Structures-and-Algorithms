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



Node *insert(int value, Node * head){
    Node *newNode = new Node(value);

    if(head == NULL){
        head = newNode;
    }
    else{
        Node *temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = newNode;
    }
    return head;
}

void display(Node *head){
    if(head == NULL){
        return;
    }
    Node *temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}