#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll m, h;
        cin >> m >> h;

        ll a = h*h;
        ll b = m/a;

        if(b<25){
            if(b<=18)
                cout<<1<<endl;
            else
                cout<<2<<endl;
        }
        else
            if(b>=25 && b<30)
                cout<<3<<endl;
            else 
                cout << 4<<endl;
    }
}