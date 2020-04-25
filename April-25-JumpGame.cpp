class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxRange = nums[0];
        if(nums.size() == 1){
            return true;
        }
        for (int i = 1; i<=maxRange; i++){
            if (nums[i] + i > maxRange){
                maxRange = nums[i] + i;
            }
            if (maxRange >= nums.size()-1){
                return true;
            }
        }
        return false;
    }
};