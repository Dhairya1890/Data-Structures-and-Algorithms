#include<iostream>
using namespace std;
#define MAX_SIZE 100
char stack[MAX_SIZE];
int top = -1;

void push(char bracks, int n){
    if(top == -1){
        top++;
        stack[top] = bracks;
    }
    else if(top != n-1){
        stack[++top] = bracks;
    }
    else{
        cout<<"stack overflow"<<endl;
    }
}
void pop(){
    if(top != -1){
        top--;
    }
    else{
        cout<<"stack underflow"<<endl;
    }
}
int isEmpty(){
    if(top == -1){
        return 1;
    }
    return 0;
}
int main(){
    int n;
    cin>>n;
    for(int i = 0; i<n; i++){
        char bracks;
        cin>>bracks;
        if(bracks == '(' || bracks == '{' || bracks == '['){
            push(bracks,n);
        }
        else if(bracks == ')' || bracks == '}' || bracks == ']'){
            if(bracks == ')' && stack[top] == '('){
                pop();
            }
            if(bracks == ']' && stack[top] == '['){
                pop();
            }
            if(bracks == '}' && stack[top] == '{'){
                pop();
            }
            else{
                break;
            }
        }
    }
    if(isEmpty()){
        cout<<"Valid Parenthesis"<<endl;
    }
    else{
        cout<<"Invalid Parenthesis"<<endl;
    }
    return 0;
}