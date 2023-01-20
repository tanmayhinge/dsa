#include <iostream>

using namespace std;

void printArr(int arr[], int n){
	for(int i = 0; i < n; ++i)
		cout << arr[i] << " ";
}

void clkRot(int a[], int n, int d){
	int b[n];
	for(int i = 0; i < n; ++i){
		b[(i+d)%n] = a[i];
	}
	printArr(b, n);
	cout << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--){
		
		int n, d;
		cin >> n >> d;
		int arr[n];
		
		for(int i = 0; i < n; ++i)
			cin >> arr[i];
			
		if(d==0){
			printArr(arr,n);
		}
		else{
			clkRot(arr, n, d);
		}
	}
	return 0;
}
