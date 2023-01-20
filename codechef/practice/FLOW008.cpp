#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n<10){
            cout<<"Thanks for helping Chef!"<<endl;
        }
        else{
            cout<<"-1"<<endl;
        }
    }
    return 0;
}