/*106235234 	12:43:35 	Tanmay..Hinge_4595f 	A - Arithmetic 	GNU C++17 	Accepted 	31 ms 	0 KB */
#include <iostream>
using namespace std;

int main(){

	int n;
	cin >> n;
	while(n--){
		int a, b, c;
		cin >> a >> b >> c;
		if(a*b == c)
			cout << "YES" << endl << a << " " << b << " " << c << endl;
		else if(c*b == a)
			cout << "YES"<< endl << c << " " << b << " " << a << endl;
		else if(a*c == b)
			cout << "YES"<< endl << a << " "<< c << " "<< b << endl;
		else
			cout << "NO"<< endl;
	}
	
}
