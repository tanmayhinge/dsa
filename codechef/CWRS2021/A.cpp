#include<bits/stdc++.h>

#define ll long long

using namespace std;

int main(){
    int a,x,y,z, cost=0;
    cin>>a>>x>>y>>z;
    int candle[x],balloon[y],cake[z];
    for (int i = 0; i < x; ++i)
    {
        cin>>candle[i];
    }
    sort(candle,candle+x);
    for (ll i = 0; i < y; ++i)
    {
        cin>>balloon[i];
    }
    sort(balloon,balloon+y);
    for (ll i = 0; i < z; ++i)
    {
        cin>>cake[i];
    }
    sort(cake,cake+z);
    int maxx;
    for (ll i = 0; i < x; ++i)
    {
        for (ll j = 0; j < y; ++j)
        {
            maxx = max(candle[i]+cake[j],candle[i]+candle[j]);
        }
        
    }
    cout<<maxx;
    

    
}