#include<iostream>
#include "trees.h"
using namespace std;

// Approach - Root -> Left -> subtree
void Inorder_Traversal(Node *node){
    if(node == NULL){
        return ;
    }
    // Traverse left recursively
    Inorder_Traversal(node->left);

    // Print after reaching the last available left node

    cout<<node->data<<" ";

    // Traverse right recursively 

    Inorder_Traversal(node->right);
}


int main(){
    Node *n1 = new Node(1);
    Node *n2 = new Node(2);
    Node *n3 = new Node(3);
    Node *n4 = new Node(4);
    Node *n5 = new Node(5);
    Node *n6 = new Node(6);


    n1->left = n2;
    n1->right = n3;
    n2->left = n4;
    n2->right = n5;
    n3->right = n6;
    
    Inorder_Traversal(n1);

    return 0;
}