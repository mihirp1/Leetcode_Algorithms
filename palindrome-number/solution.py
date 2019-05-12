#https://leetcode.com/problems/palindrome-number/

class Solution:
    def isPalindrome(self, x: int) -> bool:
        sl = str(x)
        if(sl == sl[::-1]):
          return True
        else:
            return False
        
