#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll x=n%4, y=n/4;
        ll a = 0, b = 0, c = 0, d = 0, e = 0, f = 0, xx;




        switch(x){
            case 1:
                d=1;
                break;
            case 2:
                c=2;
                break;
            case 3:
                c = 2; b = 1;
                break;
        }



        if(y>0){
            a+=y*4;
            f=(4-x)*4;
        }
        xx = (a*11)+(b*15)+(c*18)+(d*20)+f;
        cout<<xx<<endl;



    }
    return 0;
}