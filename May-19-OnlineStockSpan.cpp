class StockSpanner {
public:
    stack<int> stocks;
    stack<int> weight;
    StockSpanner() {
        
    }
    
    int next(int price) {
        int count = 1;
        while (!stocks.empty() && stocks.top() <= price){
            stocks.pop();
            count += weight.top();
            weight.pop();
        }
        stocks.push(price);
        weight.push(count);
        return count;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */