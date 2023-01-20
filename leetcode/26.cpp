#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int store = nums[0];

        for(auto i: nums){
            // TODO
            // store current number
            // if current != store, then set store = current
        }
    }
};

int main(){
    Solution s;
    vector<int> a = {1, 2, 2, 3, 4, 4, 5};
    s.removeDuplicates(a);
}