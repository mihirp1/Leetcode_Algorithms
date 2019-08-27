/* O(n) space implementation that uses 0(1) time for GetMin
  A more object Oriented solution here : https://www.geeksforgeeks.org/design-and-implement-special-stack-data-structure/
*/

class MinStack {
private:
    std::vector<int>vec; 
    std::vector<int>min_vec;
public:
    /** initialize your data structure here. */
    
    MinStack() {}
    
    void push(int x) {
        
        if(this->isEmpty())
        {
            vec.push_back(x);
            min_vec.push_back(x);
        }
        else
        {
            if(x <= min_vec[min_vec.size()-1])
            {
                vec.push_back(x);
                min_vec.push_back(x);
            }
            else
            {
                vec.push_back(x);
            }
            
            
        }
        
        
    }
    
    void pop() {
        
        if(!this->isEmpty())
        {
            if(this->top() == min_vec[min_vec.size()-1])
            {
                min_vec.erase(min_vec.end()-1);
                vec.erase(vec.end()-1);
            }
            else
            {
                vec.erase(vec.end()-1);
            }
        }
        
    }
    
    int top() {

        return(vec[vec.size()-1]);
    }
    
    int getMin() {
        
        return (min_vec[min_vec.size()-1]);
        
    }
    
    bool isEmpty() {
        if(vec.size() == 0)
            return true;
        else
            return false;
        
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
