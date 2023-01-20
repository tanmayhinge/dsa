class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sumL;
        int sumR;

        for(int i=0; i<nums.size(); i++){
            for(int k=0; k<nums.size(); k++)
                sumL+=nums[k];
            for(int j = i+1; j<nums.size(); j++){
                sumR+=nums[j];
            }
            if(sumL==sumR){
                return i;
            }
        }
        return -1;


    }
};