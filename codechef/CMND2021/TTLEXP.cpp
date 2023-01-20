#include<bits/stdc++.h>

#define ll long long

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int p,q;
        cin>>q>>p;
        if(q>=1000){
            int x = p*q/10;
            cout<<((p*q)-x)<<endl;
        }
        else{
            cout<<q*p<<endl;
        }
    }
}