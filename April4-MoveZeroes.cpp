class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int length = nums.size();
        int tracker = 0;
        int temp = 0;
        for (int i = 0; i<length; i++){
            if(nums[i] != 0){
                temp = nums[i];
                nums[i] = 0;
                nums[tracker] = temp;
                tracker++;
            }
        }
    }
};