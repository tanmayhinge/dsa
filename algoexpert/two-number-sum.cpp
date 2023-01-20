#include <vector>
using namespace std;

vector<int> twoNumberSum(vector<int> array, int targetSum) {
  // Write your code here.
  vector<int> ret;
  for(auto i: array){
    for(auto j: array){
      if(i+j == targetSum && i!=j){
        ret.push_back(i);
        ret.push_back(j);
        return ret;
      }
    }
  }
  return ret;
}
