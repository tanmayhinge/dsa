#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, ans=0;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0; i<n; ++i){
            cin>>a[i];

    int first, second; 
    if (a[0] > a[1]) 
    { 
        first = a[0]; 
        second = a[1]; 
    } 
    else
    { 
        first = a[1]; 
        second = a[0]; 
    }
    ans = first*second+first-second;

            for(int j=i; j<n; ++j){
                if(a[i]!=a[j]){
                    ans=max(a[i]*a[j]+a[i]-a[j], ans);
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
