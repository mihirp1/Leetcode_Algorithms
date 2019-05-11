# https://leetcode.com/problems/two-sum/

class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:

        #print(nums) 
        main_list = []
        sorted_list = []
        iter2 = 0
        iter3 = 0
        ele = 0
        
        for iter1,ele1 in enumerate(nums):
            main_list.append([nums[iter1],iter1])
            
        def keysort(ele):
            return ele[0]
        
        #print(main_list)
        main_list.sort(key = keysort) 
        #print("Sorted List")
        #print(sorted_list)
            
            
        for iter2,ele2 in enumerate(main_list):
            #if(ele2[0] < target):
                for iter3,ele3 in enumerate(main_list):
                    if(iter2 != iter3 ):
                        #sum1 = 
                        if(ele2[0] + ele3[0] == target):
                            return [ele2[1],ele3[1]]
            
            
            
