//https://leetcode.com/problems/power-of-two/

class Solution {
public:
    bool isPowerOfTwo(int n) {
        
         int count=0;
        
        if(n <0)
            return 0;
        
        for(int i = 0;i<32;++i)
        {
            
            if((n>>i)&1)
            {
             ++count;
            }
            
        }
    return count==1?1:0;    
        
    }
};
