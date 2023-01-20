#include <bits/stdc++.h>

using namespace std;
#define ll long long

int solve(vector<char>a, vector<char>b){
    set<char>c(a.begin(), a.end());
    ll d=0;
    for (auto i:b){
        if(c.find(i) !=c.end())
            d++;
    }
    return d;
}

int main(){
	
	ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        string s;
        map<string,vector<char>>x;
        for (ll i = 0; i < n; ++i)
        {
            cin>>s;
            if(s.length()>0){
                x[s.substr(1)].push_back(s[0]);
            }
        }
        ll d=0;
        for(auto f : x){
            for(auto g:x){
                if(f.first!=g.first){
                    ll t = solve(f.second,g.second);
                    d+=(f.second.size()-t)*(g.second.size()-t);
                }
            }
        }
        cout<< d<<endl;
    }

        


        
        
}
    
