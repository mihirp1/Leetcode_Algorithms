//https://leetcode.com/problems/maximum-subarray/discuss/373356/Simple-C%2B%2B-Solution-with-Explanation-Links

class Solution {
public:
    int maxSubArray(vector<int>& nums) {   
        int max = nums[0];   
        int global_max = nums[0];
        
        if(nums.size() == 1)
        {
            return nums[0];
        }
        
        for(int i = 1 ; i < nums.size() ; ++i)
        {
                //std::cout<< max <<std::endl;
                if(nums[i] > nums[i] + nums[i-1])
                {   
                    max = nums[i];
                    if(max > global_max)
                    {
                     global_max = max;   
                    }
                    
                    
                }
                else
                {
                    nums[i] = nums[i] + nums[i-1];
                
                    max = nums[i];
                    if(max > global_max)
                    {
                        global_max = max;
                    }
                }
            
        }
        

      return global_max;  
    }
    
};
