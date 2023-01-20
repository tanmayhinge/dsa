#include <bits/stdc++.h>

using namespace std;

#define ll long long


int main(){
    int t;
    ll count=0;
    cin >> t;
    while(t--){
        ll a, b;
        cin >> a >> b;
      do
        {
            ++count;
            if(a==b || b==1){
                b=b+1;

                continue;
            }

            a=abs(a/b);
            //cout << a << " " << endl;
        }while (a!=0);

        
        
        cout << count << endl;
        
    }
}