#include<bits/stdc++.h>
#include<stack>
#define ll long long

using namespace std;

int main(){
    ll t,flag;
    cin >> t;
    while(t--){
        ll size;
        cin >> size;
        ll c[size];
        for (ll i = 0; i < size; ++i){
            cin>>c[i];
        }

        for (ll i = 0; i < size; ++i){
            for(ll j=i; j<size; ++j){
                if(c[i]>=c[j]){
                    flag=1;
                }
                else
                    flag=0;
            }
        }
    }
    if(flag==0)
        cout<<"No";
    else    
        cout <<"Yes";

}