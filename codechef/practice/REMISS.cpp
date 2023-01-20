#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--){
        int a, b;
        cin>>a>>b;
        cout<<max(a,b)<<" "<<a+b<<endl;
    }
    return 0;
}