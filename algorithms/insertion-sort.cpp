#include <iostream>
using namespace std;
int main(){
	int a[] = {5, 2, 4, 6, 1, 3};
	int key, i, j;
	int len = sizeof(a)/sizeof(*a);
	for(j = 1; j < len; ++j){
		key = a[j];
		i = j - 1;
		while(a[i] > key && i >= 0){
			a[i + 1] = a[i];
			i = i - 1;
		}
		a[i + 1] = key;
	}
	for(j = 0; j < len; ++j)
		cout << a[j] << endl;
}
