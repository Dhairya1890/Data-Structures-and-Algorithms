#include<iostream>
using namespace std;
#define MAX_SIZE 100
int stack[MAX_SIZE];
int top = -1;

void push(int value){
    if(top == MAX_SIZE){
        cout<<"Cannot Push, Stack Already Full!"<<endl;
    }
    else{
        top++;
        stack[top] = value;
    }
}
void pop(){
    if(top != -1){
        cout<<stack[top]<<endl;
        top--;
    }
    else{
        cout<<"Stack underflow"<<endl;
    }
}
void peek(){
    if(top != -1){
        cout<<stack[top]<<endl;
    }
    else{
        cout<<"Stack underflow"<<endl;
    }
}
void isEmpty(){
    if(top == -1){
        cout<<"Stack Empty"<<endl;
    }
    else{
        cout<<"Not Empty"<<endl;
    }
}
void isFull(){
    if(top == MAX_SIZE - 1){
        cout<<"Stack is full!"<<endl;
    }
    else{
        cout<<"Stack not full"<<endl;
    }
}
int main(){
    int size;
    cin>>size;
    int n;
    cin>>n;
    string op;
    cin>>op;
    while(n--){
        if(op == "Push" || op == "push"){
            int x;
            cin>>x;
            push(x);
            cin>>op;
        }
        if(op == "Pop" || op == "pop"){
            pop();
            cin>>op;
            size--;
        }
        if(op == "Peek" || op == "peek"){
            peek();
            cin>>op;
        }
        if(op == "isEmpty"){
            isEmpty();
            cin>>op;
        }
        if(op == "IsFull"){
            isFull();
        }
    }
    for(int i = 0; i<size; i++){
        cout<<stack[i]<<" ";
    }
    return 0;
}