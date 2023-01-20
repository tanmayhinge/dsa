#include<bits/stdc++.h>
using namespace std;

int fact(int a){
    if(a==0)
        return 1;
    
    return a*fact(a-1);
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int a;
        cin>>a;
        cout<<fact(a)<<endl;
    }

}