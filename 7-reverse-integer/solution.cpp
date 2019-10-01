//https://leetcode.com/problems/reverse-integer/


class Solution {
public:
    int reverse(int x) {
        
        //std::cout << "INT_MIN : "<<INT_MIN<<std::endl;
        if(x > INT_MAX)
        {
            return 0;
        }
        
        
        
        int r;
        long long sum = 0;
        if(x > 0)
        {
         while(x != 0)
         {
             r = x % 10;
             sum = sum * 10 + r;
             x = x /10;
             //printf("%d \n",x);
             //printf("%d\n",r,x);
             
         }
                
              return (sum > INT_MAX?0 :sum);
             
            
        }
        else
        {
            if(x <= INT_MIN)
                return 0;
            
            x = (long long) x * -1;
          while(x != 0)
         {
             r = x % 10;
             sum = sum * 10 + r;
             x = x /10;
             //printf("%d \n",x);
             //printf("%d\n",r,x);
             
         }
            sum = -1 * sum;
            return (sum < INT_MIN?0 :sum);
        }
        
    
      
                        }
    
};
