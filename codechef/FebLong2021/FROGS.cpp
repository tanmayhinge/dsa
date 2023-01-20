#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(i, a, b) for(int i = (a); i<= (b); i++)


int fin(vector<int>f, int a){
	
	auto x = find(f.begin(), f.end(), a);
	if(x!=f.end()){
		int d = x - f.begin();
		return d;
	}
	else
		return -1;
}

void ip(vector<int> &a, int n){
    int x;
    for(int i = 0; i< n; i++){
		cin>>x; a.push_back(x);
	}
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	ll t;
	cin >> t;
	
	while(t--){
		int n=0, hits=0;
		cin >> n;
		vector<int> w;
		ip(w,n);
		vector<int> l;
		ip(l,n);
		vector<int>p2(n);loop(i, 0, n-1) p2[i] = i;
		vector<int> b(n); loop(i, 0, n-1) b[i] = w[i];

		sort(b.begin(),b.end());
		
		 loop(j, 1, n-1){
			int in = fin(w,b[j]);
			int p = p2[fin(w,b[j-1])];
			int p3 = in;
			
			while(p3<=p){
				p3 += l[in]; //by length
				p2[in]=p3;
				++hits;
			}
			
		}
		cout << hits << endl;
	}
	return 0;
	
}
