/*106063662 	Jan/31/2021 06:13UTC+5.5 	tanmayhinge 	A - Team 	GNU C++17 	Accepted 	62 ms 	0 KB */
#include <iostream>
using namespace std;
int main(){
	int n, p, v, t, c(0);
	cin >> n;
	while(n--){
		cin >> p >> v >> t;
		if(p+v+t >=2)
			c++;
	}
	cout << c <<endl;
	return 0;
}
