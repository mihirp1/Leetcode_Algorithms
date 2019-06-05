#https://leetcode.com/problems/climbing-stairs/submissions/
class Solution:
    def climbStairs(self, n: int) -> int:
        
        a = 1
        b = 2
        
        for _ in range(n-1):
            a,b = b,a+b
            
        return a
