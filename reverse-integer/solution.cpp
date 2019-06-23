//https://leetcode.com/problems/reverse-integer/

class Solution {
public:
    long long reverse(int x) {
        long long r;
        long long sum = 0;
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
            
              return sum;
             
            
        }
        else
        {
            x = (unsigned long long) x * -1;
          while(x != 0)
         {
             r = x % 10;
             sum = sum * 10 + r;
             x = x /10;
             printf("%d \n",x);
             //printf("%d\n",r,x);
             
         }
             
            return (-1 * sum);
        }
        
                        }
    
};
