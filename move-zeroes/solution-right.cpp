//https://leetcode.com/problems/move-zeroes/

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j;
        int temp;
        int len = nums.size();
        
        for(int i = 0;i<len;i++)
        {
            j = i+1;
            if(nums[i] == 0)
            {
            while(j < len)
            {
                if(nums[j] != 0)
                {
                    
                    temp = nums[i];
                    nums[i] = nums[j];
                    nums[j] = temp;
                    break;
                    
                }
                
            j++;    
            }
                
            }
        }
        

        
    }
};
