#https://leetcode.com/problems/container-with-most-water/

class Solution:
    
    def maxArea(self, height: List[int]) -> int:
        max_list = []
        max1 = 0
        index_hash = {}
        maxi = max(height)
        for iter1,ele1 in enumerate(height):
            #if(ele1 == maxi):
                index_hash[iter1] = 1
                for iter2,ele2 in enumerate(height):
                    if(iter1 != iter2 and iter2 not in index_hash):
                        if(max1 < (abs(iter1-iter2) * min(height[iter1],height[iter2]))):
                            max1 = (abs(iter1-iter2) * min(height[iter1],height[iter2]))
                
        return (max1)
        


