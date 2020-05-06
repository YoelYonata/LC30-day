class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> numMap;
        map<int,int>::iterator it;
        int max = 0;
        int result;
        for (int i = 0; i<nums.size(); i++){
            if (numMap.find(nums[i]) != numMap.end()){
                numMap[nums[i]]++;
            }else{
                numMap[nums[i]] = 1;
            }
        }
        for (it = numMap.begin(); it != numMap.end(); it++ ){
            if (it->second > max){
                max = it-> second;
                result = it -> first;
            }
        }
        return result;
    }
};