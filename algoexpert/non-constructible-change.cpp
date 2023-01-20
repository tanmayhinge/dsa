#include <vector>
using namespace std;

int nonConstructibleChange(vector<int> coins) {
  sort(coins.begin(), coins.end());
  int minChange = 0;
  for (auto i : coins){
    if(i > minChange+1){
      break;
    }
    minChange+=i;
  }
  return minChange+1;
}
