//https://leetcode.com/problems/min-stack/


class MinStack {
    private:
    std::vector<int>vec;
public:
    /** initialize your data structure here. */
    MinStack() {
        //std::vector<int>vec;
        
    }
    
    void push(int x) {
        vec.insert(vec.begin(),x);
        
    }
    
    void pop() {
        int temp = vec[0];
        vec.erase(vec.begin());
        
    }
    
    int top() {
        return vec[0];
        
    }
    
    int getMin() {
        
        return(*std::min_element(vec.begin(),vec.end()));
        
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
