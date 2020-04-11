class MinStack {
public:
    /** initialize your data structure here. */
    vector<int> stack;
    vector<int> min;
    MinStack() {
        
    }
    
    void push(int x) {
        stack.push_back(x);
        if (min.empty() || min[min.size()-1] >= x){
            min.push_back(x);
        }
    }
    
    void pop() {
        if(stack[stack.size()-1] == min[min.size()-1]){
            min.pop_back();
        }
        stack.pop_back();
    }
    
    int top() {
        if (stack.size() == 0){
            return -1;
        }
        return stack[stack.size()-1];
    }
    
    int getMin() {
        return min[min.size()-1];
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */