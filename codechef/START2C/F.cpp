#include<bits/stdc++.h>
#define ll long long int
using namespace  std;

int main(){

    ll t;
    cin>>t;
    while(t--){
        int n,k, marks=0;
        cin>>n>>k;

            vector<int>m;   
            vector<int>t;
            for(int i=0; i<n; i++) {
                int mtemp,ttemp;
                cin>>mtemp>>ttemp; // 1 1, 2 1
                m.push_back(mtemp);// 1 2 
                t.push_back(ttemp);// 1 1
            }
            int tM = accumulate(m.begin(), m.end(), 0);
            int tT = accumulate(t.begin(), t.end(), 0);
            if(k<=tT){
                cout<<tM-m[0]<<endl;
            }
            else{
                for(int i=0; i<m.size(); i++){
                    if(t[i]<=k){
                        marks+=m[i];   
                    }
                    cout<<marks-m[0];
                }
            }
    }
}
