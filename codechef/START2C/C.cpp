#include<bits/stdc++.h>
#define ll long long int
using namespace  std;

int main(){

    ll t;
    cin>>t;
    while(t--){
        ll n, m,temp=1, switchCount=0, x;
        cin>>n>>m;
        map<ll, ll> map1;
        vector<ll> vec1;
        for(ll i=0; i<n; ++i){
            cin>>x;
            map1[x]++;
            vec1.push_back(x);
        }
        for(ll i=0; i<m; ++i){
            cin>>x;
            map1[x]=0;
            vec1.push_back(x);
        }
        sort(vec1.begin(), vec1.end());
        for(auto i: vec1){
            if(map1[i]!=temp){
                if(temp == 1){
                    temp = 0;
                }
                else{
                    temp = 1;
                }
                switchCount++;
            }
        }
        cout<<switchCount<<endl;
        
    }
}
