class Solution {
public:
    int numJewelsInStones(string J, string S) {
        map<char,int> jewels;
        map<char,int>::iterator it;
        int count = 0;
        for (int i = 0; i<J.size();i++){
            jewels.insert(pair<char,int>(J[i],i));
        }
        for (int j = 0; j<S.size(); j++){
            it = jewels.find(S[j]);
            if (it != jewels.end()){
                count++;
            }
        }
        return count;
    }
};