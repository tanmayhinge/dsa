#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
		long long int n;
		cin >> n;
		long long int a[n], sum=0, sum1=0, sum2=0;
		
		for(long long int i = 0; i < n; ++i){
			cin >> a[i];
		}
		//probably
		//x = a[0];
		//y = a[n-1];
		//z = a[n-2];
		sort(a,a+n);
		sum1 = sum + (abs(a[0] - a[n-1]) + abs(a[0] - a[1]) + abs(a[n-1] - a[1]));
		sum2 = sum + (abs(a[0] - a[n-1]) + abs(a[0] - a[n-2]) + abs(a[n-1] - a[n-2]));
		sum = max(sum1,sum2);
		
		cout<< sum << endl;		
		
	}

	
}
