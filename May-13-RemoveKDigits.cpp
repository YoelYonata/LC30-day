class Solution {
public:
    string removeKdigits(string num, int k) {
        if (k ==  0){
            return num;
        }
        string numStack = "";
        int resultSize = num.size()-k;
        for (int i = 0; i < num.size();i++){
            while(k > 0 && numStack.size()>0 && numStack.back() > num[i]){
                numStack.pop_back();
                k--;
            }
            numStack.push_back(num[i]);
        }
        numStack.resize(resultSize);
        while (!numStack.empty() && numStack[0] == '0'){
            numStack.erase(numStack.begin());
        }
        if (numStack.empty()){
            return "0";
        }
        return numStack;
    }
};