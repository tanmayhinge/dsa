#include<bits/stdc++.h>
using namespace std;


int main(){
    int n,h,x;
    //h- required time
    //x- contest time remaining
    cin>>n>>h>>x;
    int t[n];
    for(int i=0;i<n;++i){
        cin>>t[i];
    }

    sort(t,t+n);

    for(int i=0;i<n;++i){
        if((t[i]+x)>=h){
            cout<<"YES"<<endl;
            return 0;
        }
        else{
            if(t[i]==t[n-1]){
                cout<<"NO"<<endl;
                return 0;
            }
            else
                continue;
        }
    } 
}