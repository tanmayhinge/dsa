#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--){
        ll a;
        int count =0;
        cin>>a;
        while(a!=0){
            ll x = a%10;
            if(x==4){
                count++;
            }
            a/=10;
        }
        cout<<count<<endl;
    }
    return 0;
}