#include<bits/stdc++.h>
#define ll long long int
using namespace std;


int main(){
    int t;
    cin >> t;
    while(t--){
        ll n=1,e=0,h=0,a=1,b=1,c=1;
        bool flag = false;
        cin>>n>>e>>h>>a>>b>>c;
        vector<ll> ans;
        vector<ll> temp;

        // n = no. of friends
        // e = no of eggs available
        // h = no of cho bar available
        //a,b,c - cost of each dish
        // omlette = 2 eggs
        // cho milk = 3 cho bars
        // cho cake = 1 egg, 1 cho bar
        // for(ll i = 0; i<= min(e,h); ++i){
        //     for(ll j =0; j<=(e-i)/2;++j){
        //         for(ll k =0; k<=(h-i)/3; ++k){
        //             if(i+j+k==n){
        //                 flag = true;
        //                 sum=min(sum,j*a+k*b+i*c);
        //             }
        //         }
        //     }
        // }
        // if(flag == false){
        //     cout<<-1<<endl;




        for(ll i=0; i<=n+1;++i){
            temp.push_back(i);
        }
        for(ll i=0; i<=n; ++i){
            ll x1 = lower_bound(temp.begin(),temp.end(),(2*n-e-2*i))-temp.begin();
            ll x2 = upper_bound(temp.begin(),temp.end(),(h-3*i))-temp.begin()-1;
            if(x2<x1 || x1==n+1){
                continue;
            }
            if(x2==n+1&&x2+3*i>h){
                continue;
            }
            ll k;
            if(c>a){
                k=(x1<(n-i)?x1:(n-i));

            }
            else{
                k=(x2<(n-i)?x2:(n-i));
            }

            ll f = n-k-i;
            if(k+2*i>=2*n-e && k+3*i<=h){
                ans.push_back(a*f+b*i+c*k);
            }
        }

        if(ans.size()==0){
            cout<<"-1"<<endl;
        }
        else{
            ll m = ans[0];
            for(ll i=0; i<ans.size();++i){
                if(ans[i]<m){
                    m=ans[i];
                }
            }
                cout<<m<<endl;
        }
        // }
        // else{
        //     cout<<sum<<endl;
        // }


    }
    return 0;
}