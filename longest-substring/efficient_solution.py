#https://leetcode.com/problems/longest-substring-without-repeating-characters/submissions/

class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:  
            
        length = len(s)
        main_dict_s = {}
        flag_1 = 0
        flag_2 = 0
        max1 = 0
            
        for i in range(length):
            for j in range(i,length):
               flag_1 = 0
               #print(s[i:j+1])
               dict_s = {}
               if( j - i + 1 > max1):
                for k in range(i,j+1):
                   #dict_s[]
                   if (ord(s[k]) in dict_s):
                      flag_1 = 1
                      dict_s[ord(s[k])] += 1
                      break  
                    
                   else:
                      dict_s[ord(s[k])] = 1  
                        
                if(flag_1 == 1):
                    break
                        
                if(flag_1 == 0):
                    if(j-i + 1 > max1 ):
                        max1 = j - i + 1
         
        return max1
        
