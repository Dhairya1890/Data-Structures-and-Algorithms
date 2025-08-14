#include<stdio.h>

#define MAX 100

int stack[MAX];
int top = -1;

void push(int value, int size){
    if(top == MAX-1){
        printf("Stack Overflow!\n");
    }
    else{
        stack[++top] = value;
        printf("Pushed %d\n", value);
        size++;
    }
}

void pop(int size){
    if(top == -1){
        printf("Stack Underflow!\n");
    }
    else{
        printf("Popped %d\n", stack[top]);
        top--;
        size--;
    }
}

void peek(){
    if(top == -1){
        printf("Nothing to peek\n");
    }
    else{
        printf("Top : %d\n", stack[top]);
    }
}

void traverse(int size){
    if(top == -1){
        printf("Stack is empty\n");
    }
    else{
        for(int i = 0; i<size; i++){
            printf("%d ", stack[i]);
        }
    }
}

void Search(int target, int size){
    int index = 0;
    if(top == -1){
        printf("Nothing to search!\n");
    }
    else{
        for(int i = 0; i<size; i++){
            if(stack[i] == target){
                printf("Found at Index : %d\n", index);
            }
            else{
                index++;
            }
        }
    }
}

int main(){
    printf("Enter Number of Stack Operations : ");
    int x;
    scanf("%d", &x);
    printf("Enter Array Size : ");
    int size;
    scanf("%d", &size);
    int op;
    scanf("%d", &op);
    while(x--){
        if(op == 1){
            int value;
            scanf("%d", &value);
            push(value, size);
            scanf("%d", &op);
        }
        if(op == 2){
            pop(size);
            scanf("%d", &op);
        }
        if(op == 3){
            peek();
            scanf("%d", &op);
        }
        if(op == 4){
            traverse(size);
            scanf("%d", &op);
        }
        if(op == 5){
            int target;
            scanf("%d", &target);

            Search(target, size);
            scanf("%d", &op);
        }
        else{
            printf("Invalid Operation\n");
        }
    }
    return 0;
}