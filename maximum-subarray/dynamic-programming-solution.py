class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        l = len(nums)
        temp_sum = 0
        iter2 = 0
        max1 = nums[0]
        
        if(l == 1):
            return nums[0]
        
        for i in range(1,l):
            if(nums[i] < nums[i]+nums[i-1]):
                nums[i] = nums[i-1] + nums[i]
     
            if(nums[i] > max1):
                max1 = nums[i] 
                
                    
        return max1

        
