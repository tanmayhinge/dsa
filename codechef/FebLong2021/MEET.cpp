#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int solve(string mT, ll t)
{
    ll mh;
    
    mh = 10 *(mT[0 + t] - '0') + 1* (mT[1 + t] - '0');
    if(mT[6+t] == 'P'){
		if(mh != 12) mh += 12;
	}
    if(mT[6 + t] == 'A') {
		if(mh == 12) mh-= 12;
	}
    return mh;
}
int meet(string mT, ll t)
{
    ll mm;
    mm = 10 *(mT[3 + t] - '0') + (mT[4 + t] - '0');
    return mm;
}

int main()
{
    long long t;
    cin>>t;
    cin.ignore();

    while(t--)
    {
        string mT; getline(cin, mT);
        ll mh = solve(mT, 0);
        ll mm = meet(mT, 0);
        long long n; cin>>n; cin.ignore();
        string res = "";
        while(n--)
        {
            string fT; getline(cin, fT);
            int f1 = solve(fT, 0);
            int f2 = meet(fT, 0);
            int f3 = solve(fT, 9);
            int f4 = meet(fT, 9);


            if((f1> mh)||(f3< mh)){
				
				res.push_back('0');
			}
            else if(f1 == mh && f2 > mm) res.push_back('0');
            else if(f3 == mh && f4<   mm) res.push_back('0');
            else res.push_back('1');
        }
        cout<<res<<"\n";       
    }
    return 0;
}
