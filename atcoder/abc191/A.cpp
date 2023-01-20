#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main(){
	ll v,s,t,d;
	cin >>v>>t>>s>>d;
	ll sec1;
	ll sec2;
	sec1 = s-t;
	sec2 = d/v;
	if(sec2 > sec1)
		cout << "No" <<endl;
	else
		cout << "Yes" << endl;
}
