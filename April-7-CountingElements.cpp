class Solution {
public:
    int countElements(vector<int>& arr) {
        int length = arr.size();
        int count = 0;
        int temp = 0;
        map<int,int> arrMap;
        map<int,int>::iterator it;
        sort(arr.begin(), arr.end());
        for (int i = length-1; i>=0; i--){
            arrMap.insert(pair<int,int>(arr[i],i));
            it = arrMap.find(arr[i] + 1);
            if (it != arrMap.end()){
                count++;
            }
        }
        return count;
    }
};