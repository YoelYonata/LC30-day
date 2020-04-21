class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int length = nums.size();
        int maxSum = INT_MIN;
        int maxEnd = 0;
        for (int j = 0; j<length; j++){
            maxEnd = maxEnd + nums[j];
            if (maxSum < maxEnd){
                maxSum = maxEnd;
            }
            if (maxEnd < 0){
                maxEnd = 0;
            }
         }   
        return maxSum;
    }
};