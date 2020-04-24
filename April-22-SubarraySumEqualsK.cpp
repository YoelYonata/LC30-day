class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        map<int,int> myMap;
        int count = 0;
        int sum = 0;
        myMap.insert(pair<int,int>(0,1));
        map<int,int>::iterator it;
        map<int,int>::iterator it2;
        for (int i = 0; i<nums.size();i++){
            sum += nums[i];
            it = myMap.find(sum-k);
            if (it != myMap.end()){
                count += it->second;
            }
            it2 = myMap.find(sum);
            if (it2 != myMap.end()){
                myMap.insert(pair<int,int>(sum,it2->second++));
            }else{
                myMap.insert(pair<int,int>(sum,1));
            }
        }
        return count;
    }
};