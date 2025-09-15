#include<iostream>
#include<stack>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    Node(int data){
        this->data = data;
        next = NULL;
    }
};

Node *head = NULL;
stack<int> st;

bool isPalindrome(Node *head){
    if(head == NULL) return false;
    Node * index = head;
    while(index != NULL && !st.empty()){

        if(index->data != st.top()){ // pop returns void and is used to remove the top element, to access the top element use top();
            return false;
        }
        st.pop();
        index = index->next;
    }
    return true;
}

Node* insert(int value){
    Node *newNode = new Node(value);
    if(head == NULL){
        head = newNode;       
    }
    else{
        Node *temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = newNode;
    }
    return head;
}

void display(Node *head){
    if(head == NULL) cout<<"NULL";
    Node *temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

int main(){
    insert(30);
    insert(20);
    insert(20);
    insert(10);

    display(head);

    Node *temp = head;
    while(temp != NULL){
        st.push(temp->data);
        temp = temp->next;
    }

    int result = isPalindrome(head);
    string var = (result == 1)? "True":"False";
    cout<<var<<endl;
    return 0;
}