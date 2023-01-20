#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;

    while(t--){
        vector<int> vec;
        int x=3, num;
        while(x--){
            cin>>num;
            vec.push_back(num);

        }
        sort(vec.begin(), vec.end(), greater<int>());
        cout<<vec[1]<<endl;

        
    }
    return 0;
}