#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	while(n--){
		int days, sum=0;
		cin >> days;
		for(int i = days; i>=1; i--){
			for (int j = 1; j <= (i-(i-j)); j++){
				sum += j;
			}
		} 
		cout << sum <<endl;
		
		
	}
	
	
}
