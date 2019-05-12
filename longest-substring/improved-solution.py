#https://leetcode.com/problems/longest-substring-without-repeating-characters/
from collections import Counter

class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        '''
        length = len(s)
        dict_s = {}
        for i in range(length):
            for j in range(i,length):
               print(s[i:j+1])
               sets = Counter(s[i:j+1])
               dict_s[s[i:j+1]] = sets
        '''            
            
        length = len(s)
        dict_s = {}
        flag = 0
        max1 = 0
        #if(not s):
            #print("NO STRING")
            
        for i in range(length):
            for j in range(i,length):
               flag = 0
               #print(s[i:j+1])
               dict_s = {} 
               for k in range(i,j+1):
                   #dict_s[]
                   if s[k] in dict_s:
                      flag = 1
                      dict_s[s[k]] += 1
                      break  
                      
                    
                   else:
                      dict_s[s[k]] = 1
                        
               if(flag == 0):
                if(j-i + 1 > max1 ):
                    max1 = j - i + 1
                        
        return max1           
