#include<bits/stdc++.h>
#define ll long long int
using namespace  std;

// ll firstNum(ll n){
//     while(n>=10){
//         n/=10;
//     }
//     return n;
// }

// ll lastNum(ll n){
//     return (n%10);
// }

int main(){


    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        cout<<s[0]-'0' + s[s.length()-1] -'0' <<endl;
    }
    return 0;
}
