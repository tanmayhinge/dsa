/*106235580 	12:52:47 	Tanmay..Hinge_4595f 	B - Fair Division 	GNU C++17 	Accepted 	31 ms 	0 KB */
	#include <iostream>
	using namespace std;

	int main(){

		int n;
		cin >> n;
		while(n--){
			int amt;
			cin >> amt;
			if(amt%3==0 && amt!=0){
				cout << ((amt/3)-1) << " "<< (amt/3) <<" "<< ((amt/3)+1) << endl;
			}
			else
				cout << -1 <<endl;
			
		}
		
	}
