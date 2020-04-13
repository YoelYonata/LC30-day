class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int count = 0;
        int length = nums.size();
        int maxLength = 0;
        map <int, int> mem;
        map <int, int> ::iterator it;
        mem.insert(pair<int,int> (0,0));
        for (int i = 0; i<length; i++){
            if (nums[i] == 0 ){
                count--;
            }
            else if (nums[i] == 1){
                count++;
            }
            it = mem.find(count);
            if (it != mem.end()){
                maxLength = max(maxLength, i+1-it->second);
            }
            mem.insert(pair<int,int> (count,i+1));
        }
        return maxLength;
    }
};