#https://leetcode.com/problems/search-insert-position/
class Solution:
    def searchInsert(self, nums: List[int], target: int) -> int:
        l = len(nums)

        for iter1,ele1 in enumerate(nums):
            if(target == nums[iter1]):
                return iter1
            
            elif(nums[iter1] > target):
                    return iter1
                
        if(target > nums[l-1]):
            return l
