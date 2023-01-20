#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--){
        int a, mul=1;
        cin>>a;
        while (a!=0){
            mul *= a;
            a--;
        }
        cout<<mul<<endl;
    }
    return 0;
}