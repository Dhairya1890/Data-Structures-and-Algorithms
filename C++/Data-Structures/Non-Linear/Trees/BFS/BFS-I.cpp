#include "trees.h"
#include<queue>
void BFS(Node *root){
    if(root == nullptr){
        cout<<"No Root";
        return;
    }

    queue<Node*> q;
    q.push(root);

    while(!q.empty()){
        Node *current = q.front();
        q.pop();
        
        cout<<current->data<<" ";

        if(current->left != nullptr){
            q.push(current->left);
        }

        if(current->right != nullptr){
            q.push(current->right);
        }
    }
    cout<<endl;
}

int main(){
    Node *n1 = new Node(10);
    Node *n2 = new Node(5);
    Node *n3 = new Node(7);
    Node *n4 = new Node(3);
    Node *n5 = new Node(4);
    Node *n6 = new Node(6);


    n1->left = n2;
    n1->right = n3;
    n2->left = n4;
    n2->right = n5;
    n3->left = n6;

    BFS(n1);

    return 0;
}