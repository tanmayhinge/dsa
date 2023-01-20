#include <iostream>
using namespace std;

int main(){
	
	int n;
	cin >> n;
	while(n--){
	
		int days, sum = 0;
		cin >> days;
		for (int i = 1; i <= days; i++){
			for(int j = 1; j <= i; j++){
				sum += i;
			}
		}

		cout << sum <<endl;
	}
	
}

// incomplete, solution was way harder, concepts unknown
