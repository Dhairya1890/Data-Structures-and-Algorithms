// Binary tree are dynamic data structures, They are similar to linked lists, but have two pointers instead of one like doubly linked lists,
// But unlike doubly linked lists the two pointers don't point back and forth, instead they form [    Root    ]
//                                                                                                    Data   
//                                                                                               [ Left Right ]    


#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *left;
    struct Node *right;

};

struct Node* newNode(int value){
    struct Node* temp = (struct Node *)malloc(sizeof(struct Node));

    temp->data = value;
    temp->left = temp->right = NULL;
    return temp;
}

struct Node* traverse(struct Node *root){
    if(root == NULL){
        return NULL;
    }

    printf("%d\n", root->data);

    traverse(root->left);

    traverse(root->right);

}

int main(){
    struct Node *n1 = newNode(10);
    struct Node *n2 = newNode(20);
    struct Node *n3 = newNode(30);
    struct Node *n4 = newNode(40);
    struct Node *n5 = newNode(50);
    struct Node *n6 = newNode(60);
    struct Node *n7 = newNode(70);

    n1->left = n2;
    n1->right = n3;
    n2->left = n4;
    n2->right = n5;
    n3->left = n6;
    n3->right = n7;
    traverse(n1);
    return 0;
}

