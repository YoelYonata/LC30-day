class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max = 0;
        int length = prices.size();
        for (int i = 1; i < length; i++){
            if (prices[i] > prices[i-1]){
                max += prices[i] - prices [i-1];
            }
        }
        return max;
    }
};