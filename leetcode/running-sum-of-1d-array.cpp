class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> ret;
        int sum = 0;
        for(auto i: nums){
            sum+=i;
            ret.push_back(sum);
        }
        return ret;
    }
};