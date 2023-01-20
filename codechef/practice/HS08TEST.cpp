#include <iostream>
using namespace std;

int main() {
	int w;
	float amt;
	cin >> w >> amt;
	if (w%5==0 && w <=(amt-0.5))
		cout << (amt-0.5-w);
	else
		cout << amt;
	return 0;
}
