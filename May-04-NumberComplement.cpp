class Solution {
public:
    int findComplement(int num) {
        if (num == 0){
            return 1;
        }
        int numBits = 0;
        int temp = num;
        while(temp != 0){
            numBits++;
            temp = temp/2;
        }
        int shiftBy = 32 - numBits;
        num = num << shiftBy;
        num = ~num;
        num = num >> shiftBy;
        return num;
    }
};