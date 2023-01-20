#include <vector>
using namespace std;

vector<int> sortedSquaredArray(vector<int> array) {
  // Write your code here.
  vector<int> ret;
  for (auto i: array){
    ret.push_back(i*i);
  }
  sort(ret.begin(), ret.end());
  return ret;
}
