class Solution {
public:
    bool isHappy(int n) {
        vector <int> m;
        int temp = 0;
        int count = 0;
        if (n<0){
           return false;
        } 
        while (count < 1000){
            m.clear();
            for (int i = 0; n > 0 ;i++){
                temp = n%10;
                n = n/10;
                m.push_back(temp);
            }
            for (int j = 0; j < m.size(); j++){
                n += m[j]*m[j];
            }
            if (n == 1){
                return true;
            }
            count++;
        }
        return false;
    }
};	