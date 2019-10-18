//https://leetcode.com/problems/happy-number/

class Solution {
public:
    
    int getSum(int n)
    {
        int r,sum=0;
         while(n>0)
                    {
                      r = n%10;          
                      sum += r*r;
                       n=n/10;
            
                     }
        return sum;
        
    }
    
    
    bool isHappy(int n) {
        int slow;
        int fast;
        slow=fast=n;
        do
        {
        slow = getSum(slow);
        fast = getSum(fast);
        fast = getSum(fast);    
        }
        while(slow != fast);
        
        if(slow==1)
        {
            return true;
        }        
        else
        return false;
    }
};
