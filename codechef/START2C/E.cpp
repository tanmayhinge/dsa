#include<bits/stdc++.h>
#define ll long long int
using namespace  std;

int main(){

    ll t;
    cin>>t;
    while(t--){
        ll n, sum = 0;
        cin >> n;
        vector<int>a;
        for(int i=0; i<n; i++){
            int temp;
            cin>>temp;
            sum += temp;
            a.push_back(temp);
        }
        if(sum == n){
            cout<<n<<endl;
        }
        else{
            cout<<accumulate(a.begin(), a.end(), 0)-n<<endl;
        }

    }
}
