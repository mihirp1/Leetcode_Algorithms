//https://leetcode.com/problems/armstrong-number/submissions/
class Solution {
public:
    bool isArmstrong(int N) {
        
        int count  = 0;
        int i = 0;
        int temp = N;
        int temp1 = N;
        int sum = 0;
        while(temp != 0)
        {
            ++count;
            i = temp % 10;
            temp = temp /10;
        }
        
        while(temp1 != 0)
        {
            
            i = temp1 % 10;
            temp1 = temp1 /10;
            sum += pow(i,count);
        }
        
        if(sum == N)
        {
            return true;
        }
        else
        {
            return false;
        }
        
        
        
        std::cout<<"Count : "<<count<<std::endl;
        
     return true;   
    }
};
