#include<bits/stdc++.h>
#define ll long long
using namespace std;

int factorial(ll n){
    ll num = 1;
    for(int i = 1; i <=n; ++i) {
        num *= i;
    }   
    return num;
}

bool perm(ll r, ll n){
    ll p = factorial(n)/factorial(n-r);
    cout<<p;
    if(r>p)
        return false;
    else
        return true;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll a[n],x=0,flag=0;
        //ll p[n]; //wait...wtf is permutation tho
        for(ll i=0; i<n; ++i){
            cin>>a[i];
        }

        // p = n!/(n-r) n=N and r=a[i] and if p[i]>=a[i], continue
        // to do -> a[i]=a[i]+1

        sort(a,a+n);
        // for(int i=0; i<n; ++i){
        //     bool flag = true;
        //     a[i]=a[i]+1;
        //     if(perm(a[i],n)){
        //         continue;
        //     }
        //     else{
        //         if(i%2==0||i==0||i!=1){
        //             cout<<"First"<<endl;
        //         }
        //         else{
        //             cout<<"Second"<<endl;
        //         }
        //     }
        // }
        for(ll i=0; i<n; ++i){
            if((i+1-a[i])<0){
                flag=1;
                break;
            }
            x+=(i+1-a[i]);
        }
        if(flag==1){
            cout<<"Second"<<endl;
        }
        else{
            if(x%2==1){
                cout<<"First"<<endl;
            }
            else{
                cout<<"Second"<<endl;
            }
        }

    }
    return 0;
}