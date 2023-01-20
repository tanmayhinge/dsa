#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--){
        int n, x, y=0;
        cin>>n;
        while(n!=0){
            x = n%10;
            y = y*10+x;
            n/=10;
        }
        cout<<y<<endl;
    }
    return 0;
}