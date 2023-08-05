class MinStack {

private:
    stack<int> s;
    stack<int> sMin;
public:
    MinStack() {
        
    }
    
    void push(int val) {
        s.push(val);
        if (sMin.empty() || val <= getMin())
            sMin.push(val);
    }
    
    void pop() {
        if (s.top() == getMin()) sMin.pop();
        s.pop();
    }
    
    int top() {
        return s.top();
    }
    
    int getMin() {
        return sMin.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */