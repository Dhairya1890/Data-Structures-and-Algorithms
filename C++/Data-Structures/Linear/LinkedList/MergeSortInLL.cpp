// Implementation of Merge Sort in Single Linked Lists

#include<iostream>
#include "Base.h"


Node* Merge(Node *slow, Node *fast){

    Node * dummy = new Node(-1);
    Node *tail = dummy;

    Node * left = slow;
    Node *right = fast;
    while(left != NULL && right != NULL){
        if(left->data <= right->data){
        tail->next = left;
        left = left->next;
    }
    else{
        tail->next = right;
        right = right->next;
    }
    tail = tail->next;
    }
    if(left != NULL){
        tail->next = left;
    }
    if(right != NULL){
        tail->next = right;
    }
    return dummy->next;
}


Node * MergeSort(Node *head){
    // Base case: if head is NULL or there's only one node
    if(head == NULL || head->next == NULL){
        return head;
    }
    
    Node *slow = head;
    Node *fast = head;
    Node *prev = NULL;
    
    // Find the middle of the linked list
    while(fast != NULL && fast->next != NULL){
        prev = slow;
        slow = slow->next;
        fast = fast->next->next;
    }
    
    // Split the list into two halves
    prev->next = NULL;
    Node *left = head;
    Node *right = slow;
    
    // Recursively sort both halves
    left = MergeSort(left);
    right = MergeSort(right);
    
    // Merge the sorted halves
    return Merge(left, right);
}

int main(){
    Node * head = NULL;
    
    
    head = insert(10, head);
    head = insert(5, head);
    head = insert(23, head);
    head = insert(34, head);
    head = insert(64, head);

    Node *sorted = MergeSort(head);

    display(sorted);
}