#include<iostream>

using namespace std;

int main(){
    int x;
    cin>>x;
    if(x%100==0){
        cout<<100;
    }
    else{
        cout<<100-(x%100)<<endl;
    }
}