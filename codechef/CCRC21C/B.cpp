#include<bits/stdc++.h>

#define ll long long
using namespace std;

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n, k;
        cin >> n >> k;
        ll a[k];
        for (ll i = 0; i < k; ++i){
            cin>>a[i]; //points assigned   
        }
        
        string s[n];

        for (ll i = 0; i < n; ++i)
        {
            cin>>s[i];
            ll sum = 0;
            string temp = s[i];
            for (ll j = 0; j < k; ++j)
            {
                if(temp[j]=='1'){
                    sum+=a[j];
                }
            }
            cout<<sum<<endl;
            
        }
        
        // for(ll i=0; i<n; ++i){

        //     ll sum = 0;
        //     cin >> s[i];
        //     for(int j=0; j<k; ++j){

        //     }

        //     // for(ll i = 0; i<k; ++i){
        //     //     if(s[i]=='1'){
        //     //         sum+=a[i];
        //     //     }
        //     // }
        //     cout<<sum<<endl;
        // }
        
    }
}