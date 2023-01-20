/*106062497 	Jan/31/2021 05:11UTC+5.5 	tanmayhinge 	A - Way Too Long Words 	GNU C++17 	Accepted 	30 ms 	0 KB */
#include <iostream>

using namespace std;
int main(){
	int n,i;
	string s;
	cin >> n;
	for (i = 0; i < n; i++){
		cin >> s;
		if(s.size() <= 10)
			cout << s << endl;
		else{
			int ct = (s.size()-2);
			cout << s[0] << ct << s[s.size()-1] <<endl;
		}
	}
}
