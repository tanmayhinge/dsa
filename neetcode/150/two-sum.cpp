#include <bits/stdc++.h>

using namespace std;


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> store;
        int n = nums.size();
        for (int i = 0; i<n; i++){
            int complement = target - nums[i];
            if (store.count(complement)){
                return {store[complement], i};
            }
            store[nums[i]] = i;
        }
        return {};
    }
};