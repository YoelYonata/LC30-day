class Solution {
public:
    int rangeBitwiseAnd(int m, int n) {
        if (m == n){
            return m;
        }
        long int num = m;
        for (long int i = m+1; i <= n; i++) {
            num &= i;
            if (num == 0){
                break;
            }
        }
        return num;
    }
};