
class Solution {
public:
    bool backspaceCompare(string S, string T) {
        int count1 = 0;
        int count2 = 0;
        for (int i = S.size()-1; i>=0; i--){
            if (S[i] == '#'){
                S.erase(i,1);
                count1++;
            }else if (S[i]!= '#' && count1 > 0){
                S.erase(i,1);
                count1--;
            }
        }
        for (int i = T.size()-1; i>=0; i--){
            if (T[i] == '#'){
                T.erase(i,1);
                count2 ++;
            }else if (T[i]!= '#' && count2 > 0){
                T.erase(i,1);
                count2--;
            }
        }  
        if (S == T){
            return true;
        }
        else{
            return false;
        }
    }
};