//https://leetcode.com/problems/palindrome-number/

class Solution {
public:
    bool isPalindrome(long long x) {
        
        if(x  >= 0 && x < 10)
        {
            return true;
        }
        
        long long r;
        long long sum = 0;
        long long y = x;        
        if(x > 0)
        {
         while(x != 0)
         {
             r = x % 10;
             sum = sum * 10 + r;
             x = x /10;
             printf("%d \n",x);
             //printf("%d\n",r,x);

         }
              if(y == sum)
              {
                return true;          
              }
              else
              {
                  return false;
              }
        


        }
        else
        {
               return false;
        }

                        }

        
    
};
