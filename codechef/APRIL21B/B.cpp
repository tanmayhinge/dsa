#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t;
    cin>>t;

    while(t--){

        ll n, m, k;
        cin>>n>>m>>k;
        double matX[n+1][m+1];
        for(ll i =0; i<=n; i++){
            for(ll j =0; j<=m; j++){
                if(i==0 || j==0){
                    matX[i][j]=0;
                }
                else{
                    cin >> matX[i][j];
                }
            }
        }
        for(ll i=0; i<=n; i++){
            double rec=0;
            for(ll j=0; j<=m; j++){
                matX[i][j]+=rec;
                rec=matX[i][j];

            }
        }
        for(ll j=0; j<=m; j++){
            double rec=0;
            for(ll i=0; i<=n; i++){
                matX[i][j]+=rec;
                rec=matX[i][j];
            }



        }
        ll zx = min(n, m);
        ll ct = 0;
        for(ll l=1; l<=zx; l++){
            for(ll i=l; i<=n; i++){
                for(ll j=l; j<=m; j++){
                    if((matX[i][j]+matX[i-l][j-l]- matX[i][j-l]-matX[i-l][j])/(l*l)>=k){
                        ct++;
                    }
                }
            }
        }

        cout<<ct<<endl;
    }
    return 0;
}