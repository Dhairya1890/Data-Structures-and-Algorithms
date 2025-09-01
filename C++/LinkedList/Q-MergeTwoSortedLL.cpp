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

Node *head1 = NULL;
Node *head2 = NULL;

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
}

int main(){
    insert(10,head1);
    insert(30,head1);
    insert(40,head1);
    insert(50,head1);

    insert(20,head2);
    insert(15,head2);
    insert(35,head2);
    insert(45,head2);

    display(head1);
    display(head2);
}