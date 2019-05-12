#https://leetcode.com/problems/longest-common-prefix/




class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        min_len = 10000000000000000000000000000000
        #prl = []
        flag = 0
        for iter1,ele1 in enumerate(strs):
            if(len(ele1) < min_len):
                min_len = len(ele1)
                
        print(min_len)
        
        if(not strs):
            return ""
        
        if(len(strs) == 1):
            return strs[0]
        
        for iter2 in reversed(range(0,min_len,1)):
        
            prl = []
            for iter1,ele1 in enumerate(strs):
                #print("I AM IN")
                #print(ele1[:iter2+1])
            
                prl.append(str(ele1[:iter2+1]))
            if(len((set(prl))) == 1):
                flag = 1
                return ele1[:iter2+1]
        
        if(flag == 0):
            return ""
