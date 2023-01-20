#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    

    int test, sC=0, tC=0, s, t,m, n, s1, t1, l1, l2;
    cin>>test;
    for(int i=0; i<test; ++i){
        cin>>s>>t;
        m=m+s;n=n+t;

        // if(s>t){
        //     maxDiff = max((s-t), maxDiff);
        //     cout<<1<<" "<<maxDiff;
        // }
        // else{
        //     maxDiff=max((t-s), maxDiff);
        //     cout<<2<<" "<<maxDiff;
        // }
        (m>=n)?s1 = m-n:t1=n-m;
        (s1>l1)?l1=s1:l2=t1;

    }
    
    if(l1>l2){
        cout<<1<<" "<<l1;
    }
    else{
        cout<<2<<" "<<l2;
    }






    return 0;
}