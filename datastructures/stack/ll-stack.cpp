#include<bits/stdc++.h>
#define MAX_SIZE 101
using namespace std;


struct Node{
    int data;
    Node* next;
};
Node* top = NULL;

void Print(){
    if(top==NULL){
        cout<<"nah";
        return;
    }
    Node* temp = top;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;


}


void Pop(){
    if(top==NULL){
        cout << "nope";
        return;
    }
    Node* temp = new Node();
    top = top->next;
    free(temp);
}


void Push(int n){
    Node* temp = new Node();
    temp->data=n;
    temp->next=top;
    top=temp;
}


int main(){
    Push(5);Print();
    Push(3);Print();
    Pop();Print();
    Push(1);Print();
}