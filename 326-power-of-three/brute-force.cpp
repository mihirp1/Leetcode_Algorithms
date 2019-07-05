//https://leetcode.com/problems/power-of-three/
class Solution {
public:
    bool isPowerOfThree(int n) {
        
            if(n==1)
            {
                return true;
                
            }
        
            if(n%3 != 0)
            {
                return false;
            }
            
            while(n!=0)
            {
                if(n%3 == 0)
                {
                    n=n/3;
                    continue;
                }
                
                else if(n == 1)
                {
                    //std::cout<<"Cond 2, "<<n<<std::endl;
                    return true;
                }
                else
                {
                    return false;
                }
                
            }
            
    
        return false;
    }
};
