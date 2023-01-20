#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--){
        int a, b;
        cin>> a>> b;
        if(a>b){
            cout<<">"<<endl;
        }
        else if(b>a){
            cout<<"<"<<endl;
        }
        else{
            cout<<"="<<endl;
        }
    }
    return 0;
}