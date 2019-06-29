//https://leetcode.com/problems/maximum-subarray/
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max=nums[0];
        int l = nums.size();
        
        if(l == 1)
        {
            
            return *nums.begin();
        }
        
        for(int i = 1;i<l;i++)
        {
            
            if(nums[i] < nums[i] + nums[i-1])
            {
                
                nums[i] = nums[i] + nums[i-1];

                
            }
            
            if(nums[i] > max)
            {
                        
                max = nums[i];
                        
            }
            
            
        }


        return max;
        
    }
    
};
