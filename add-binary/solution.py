#https://leetcode.com/problems/add-binary/

class Solution:
    def addBinary(self, a: str, b: str) -> str:
        
        if(a == "0" and b == "0"):
            return "0"
        
        return (str(bin(int(a,2) + int(b,2)))).lstrip('0b')
        

