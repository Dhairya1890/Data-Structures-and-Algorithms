#include<iostream>
using namespace std;


class Node{
    public:
    int data;
    Node* right;
    Node* left;

    Node(int value){
        this->data = value;
        left = right = nullptr;
    }
};