#https://leetcode.com/problems/3sum/


class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        main_list =  []
        for iter1,ele1 in enumerate(nums):
            
                for iter2,ele2 in enumerate(nums):
                    if(iter1 != iter2):
                        for iter3,ele3 in enumerate(nums):
                            if(iter2 != iter3 and iter3 != iter1):
                                if((ele1 + ele2 + ele3) == 0):
                                    if(sorted([ele1,ele2,ele3]) not in main_list):
                                        main_list.append(sorted([ele1,ele2,ele3]))
        
        return sorted(main_list) 
