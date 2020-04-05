class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map <int,int> memory;
        map <int,int>::iterator it;
        int length = nums.size();
        for (int i = 0;i<length; i++){
            it = memory.find(nums[i]);
            if (it != memory.end()){
                memory.erase (it);
            }
            else{
              memory.insert(pair<int, int>(nums[i],i));  
            }    
        }
        it = memory.begin();
        return it->first;
    }
};