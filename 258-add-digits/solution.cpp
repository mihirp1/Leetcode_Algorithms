//https://leetcode.com/problems/add-digits/

class Solution {
public:
    int addDigits(int n) {
        
        int r;
        int sum=0;
        if(n==0)
        {
            return 0;
        }
        
        while(sum>9 || sum==0)
             {   
                 sum = 0;
                 while(n>0)
                    {
                      r = n%10;          
                      sum += r;
            
                       n=n/10;
            
                     }
              n=sum;
     
     
            }
                return sum;

        
    }
};
