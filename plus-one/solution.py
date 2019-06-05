#https://leetcode.com/problems/plus-one/

class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        n = ""
        s = 0
        s1 = ""
        for num in digits:
            n = str(n) + str(num)
        
        s = (int(n)+1)
        s1 = str(s)
        s1 = list(map(int,s1))
        return((s1))
        
