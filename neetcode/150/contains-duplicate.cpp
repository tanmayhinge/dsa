#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> store;
        for(auto num : nums){
            if (store.count(num) > 0){
                return true;
            }
            store.insert(num);
        }
        return false;
    }
};