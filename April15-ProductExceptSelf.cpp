class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int length = nums.size();
        int L = 1;
        int R = 1;
        vector <int> result(length,1);
        for (int i = 0; i<length; i++){
            result[i] *= L;
            L *= nums[i];
            result[length-1-i] *= R;
            R *=nums[length-1-i];  
        }
        return result;
    }
};