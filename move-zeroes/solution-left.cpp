//https://leetcode.com/problems/move-zeroes/

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j;
        int temp;
        
        for(int i = 0;i<nums.size();i++)
        {
            j = i-1;
            if(nums[i] == 0)
            {
            while(j < nums.size())
            {
                if(nums[j] != 0)
                {
                    
                    temp = nums[j];
                    nums[j] = nums[i];
                    nums[i] = temp;
                    break;
                    
                }
                
            j++;    
            }
                
            }
        }
        
      for(int i = 0;i<nums.size();i++)
      {
          
          std::cout << nums[i]<<" ";
      }
        //return nums
        
    }
};
