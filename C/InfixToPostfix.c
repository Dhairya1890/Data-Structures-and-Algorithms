#include<stdio.h>
#include<ctype.h>
#include<string.h>


#define MAX 100
char stack[MAX];

int top = -1;


void push(char value){
    stack[++top] = value;
}
char pop(){
    return stack[top--];
}

char peek(){
    return stack[top];
}

int precedence(char op){
    if(op == '^') return 3;
    if(op == '*' || op == '/') return 2;
    if(op == '+' || op == '-') return 1;
    return 0;
}

int isEmpty(){
    return top == -1;
}

void infixToPostfix(char* infix) {
    char postfix[MAX]; //Tp store operands
    int j = 0;

    for(int i = 0; i< strlen(infix); i++){
        char c = infix[i];

        if(isalnum(c)){ // if C is A-Z or 0-9
            postfix[j++] = c;
        }
        else if(c == '('){
            push(c);
        }
        else if(c == ')'){
            while(!isEmpty() && peek() != '('){
                postfix[j++] = pop();
            }
            pop();
        }
        else{
            while(!isEmpty() && precedence(peek()) >= precedence(c)){
                postfix[j++] = pop();
            }
            push(c);
        }
    }
    while(!isEmpty()){
        postfix[j++] = pop();
    }
    postfix[j]
}
