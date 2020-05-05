class Solution {
public:
    int firstUniqChar(string s) {
        map<char,int> myMap;
        int answer = 0;
        for (int i = 0; i<s.size(); i++){
            if (myMap.find(s[i]) != myMap.end()){
                myMap[s[i]]++;
            }else{
                myMap[s[i]] = 1;
            }
        }
        for (int j = 0; j<s.size(); j++){
            if (myMap.at(s[j]) == 1){
                return j;
            }
        }
        return -1;
    }
};