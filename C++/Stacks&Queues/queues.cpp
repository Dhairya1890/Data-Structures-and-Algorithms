#include<iostream>
using namespace std;
#define Max_Size 100
int queue[Max_Size];

int front = -1;
int rear = -1;


void enqueue(int value){
    if(front == -1){
        front = 0;
    }
    queue[++rear] = value;
}

void dequeue(){
    if(front != -1){
        cout<<"Dequeued "<<queue[front]<<endl;
        front++;
    }
    else{
        cout<<"Queue underflow"<<endl;
    }
}

void peek(){
    if(front != -1){
        cout<<"Element at front "<<queue[front];
    }
    else{
        cout<<"Queue Underflow"<<endl;
    }
}

void isEmpty(){
    if(front == -1){
        cout<<"Queue Empty"<<endl;
    }
    else{
        cout<<"Queue Not Empty"<<endl;
    }
}
int main(){

    int n;
    cin>>n;
    while(n < 3){
        if(n == 1){
            int x;
            cin>>x;
            enqueue(x);
            cin>>n;
        }
        if(n == 2){
            dequeue();
            cin>>n;
        }
    }
    if(n >= 3){
        cout<<"Exiting..."<<endl;
        return 0;
    }
}