#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin>>s;
        int n= s.length();
        int groups=0;
        for(int i=0; i<n; ++i){
            if(s[i]=='1'){
                ++groups;
            }
        }
        for(int i=0; i<n-1; ++i){
            if(s[i]=='1'&&s[i+1]=='1'){
                --groups;
            }        
        }
        cout<<groups<<endl;
    }

}