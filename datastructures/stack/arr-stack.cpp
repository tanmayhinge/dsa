#include<bits/stdc++.h>
#define MAX_SIZE 101
using namespace std;


int a[MAX_SIZE];

int top = -1;

void Print(){
    cout<<"Stack:";
    for (int i = 0; i <=top; ++i){
        cout << a[i];
    
    cout<<endl;
    }
    
}


void Pop(){
    if(top==-1){
        cout<<"empty stack";
        return;
    }
    top--;
}

int Top(){
    return a[top];
}

void Push(int n){
    if(top==MAX_SIZE-1){
        cout<<"overflow";
        return;
    }
    a[++top]=n;
}


int main(){
    Push(5);Print();
    Push(3);Print();
    Pop();Print();
    Push(1);Print();
    Top();
}