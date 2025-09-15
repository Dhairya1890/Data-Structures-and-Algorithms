#include<iostream>
#include "Base.h"
using namespace std;

Node* Merge(Node *head1, Node *head2, Node* dummy){
    Node*l1 = head1; 
    Node*l2 = head2;
    
    Node* tail = dummy;

    if(l1 == NULL) return l2;
    if(l2 == NULL) return l1;

    while(l1 != NULL && l2 != NULL){
        if(l1->data <= l2->data){
            tail->next = l1;
            l1 = l1->next;
        }
        else{
            tail->next = l2;
            l2 = l2->next;
        }
        tail = tail->next;
    }
    if(l1 != NULL){
        tail->next = l1; // Directly attach the remaining list, No need to attach one by one
    }
    if(l2 != NULL){
        tail->next = l2;
    }
    return dummy->next;
}
//Merge Two Sorted Linked Lists

// Approach - Use two pointer, each one for each list - Say l1 and l2
//            initialize this pointers to the head of each list respectively
//            Initialize and declare a tail pointer to a dummy Node first for easy handling of linking Nodes
//            compare l1->data to l2->data,
//            if l1->data <= l2->data, attach l1 to tail
//            If l2->data < l1->data, attach l2 to tail
//            move tail forward
//            Attach remaining any remaining list to tail.

int main(){

    Node *head1 = NULL;
    Node *head2 = NULL;
    Node *dummy = NULL;

    //Two Linked Lists
   head1 = insert(10,head1);
   head1 = insert(30,head1);
   head1 = insert(40,head1);
   head1 = insert(50,head1);

   head2 = insert(20,head2);
   head2 = insert(34,head2);
   head2 = insert(35,head2);
   head2 = insert(45,head2);

   dummy = insert(-1, dummy);
   Merge(head1, head2, dummy);
    display(dummy);
}