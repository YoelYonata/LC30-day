class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int length = strs.size();
        map <string, vector<string>> mem;
        map <string, vector<string>>::iterator it;
        vector<vector<string>> res;
        for (int i = 0; i<length;i++){
            string sorted = strs[i];
            sort(sorted.begin(),sorted.end());
            mem[sorted].push_back(strs[i]);
        }
        it = mem.begin();
        while(it != mem.end()){
            res.push_back(it->second);
            it++;
        }
        return res;
    }
};