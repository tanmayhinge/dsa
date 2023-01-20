#include<bits/stdc++.h>
#define ll unsigned long long
using namespace std;


int main(){
    ll t;
    cin >> t;
    while(t--){
        ll c;
        cin>>c;
        // 2 pow d is > c
        //a,b < 2 pow d
        // c,a,b < 2 pow d

        ll lol = c, i=0;
        while(lol>0){
            lol/=2;
            i++;
        }
        ll a,b;

        // for(ll i = 0; i<n; ++i){
        //     a=i;
        //     b=a^c;
        //     ll x = a^b;
        //     if((x==c)&&b<c){
        //         //cout<<a<<" "<<b<<endl;
        //         maxx = max(maxx,a*b);
        //     }
        // }
        a = pow(2,i-1)-1;
        b = a^c;
        cout<<a*b<<endl;


    }

}