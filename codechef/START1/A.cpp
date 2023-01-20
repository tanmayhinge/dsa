#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll t;
    cin>>t;
    while(t--){
        int d, c, sum=0;
        cin>>d>>c;
        int a1, a2, a3;
        cin >> a1 >> a2 >> a3;

        int b1, b2, b3;
        cin >> b1 >> b2 >> b3;

        int cost1 = a1+a2+a3;
        int cost2 = b1+b2+b3;
        int cost = cost1+cost2;
        int costD = cost+(d*2);
        int costC = cost+c;
        int costCD = cost+c+d;

        int coupon;
        if(cost1>=150&&cost2>=150){
            coupon = costC;
        }
        else if((cost1>=150 && cost2<150)||(cost2>=150 && cost1<150)){
            coupon = costCD;
        }
        else if(cost1<150&&cost2<150){
            coupon = costD+c;
        }

        if(coupon<costD)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
        

    }
    return 0;
}