#include<bits/stdc++.h>
#define ll long long int
using namespace  std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n, m, x, count=0;
        cin>>n>>m;

        set<int> a;
        for(int i=0; i<n; i++){
            int temp;
            cin >> temp;
            a.insert(temp);
        }

        for(int i=1; i<=m; i++){
            const bool is_in = a.find(i) != a.end();
            if(is_in==1){
                count++;
                if(count == m){
                    cout<<"NO"<<endl;
                }
                continue;
            }
            else{
                cout<<"YES"<<endl;
                break;
            }
        }
        
        

    }
    return 0;
}
