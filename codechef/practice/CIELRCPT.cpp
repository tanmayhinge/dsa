#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a[12] = {1,2,4,8,16,32,64,128,256,512,1024,2048};
    int t;
    cin>>t;
    while(t--){
        int p, sum=0;
        cin>>p;
        for(int i=11; i>=0; i--){
            if(p>=a[i]){
                sum+=p/a[i];

                if(p%a[i]==0) break;
                else{
                    p-=((p/a[i])*a[i]);
                }
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}