class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        if (nums.size() == 1){
            return nums[0];
        }
        int left = 0;
        int right = nums.size()-1;
        while (left < right){
            int mid = (left + right)/2;
            if (mid%2 == 1){
                mid--;
            }
            if (nums[mid] != nums[mid + 1]){//left side
                right = mid;
            } 
            else{//right side
                left = mid + 2;
            } 
        }
        return nums[right];
    }
};