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
        if(not s):
            print("NO STRING")
            
        for i in range(length):
            for j in range(i,length):
               flag = 0
               #print(s[i:j+1])
               sets = Counter(s[i:j+1])
               for key,val in sets.items():
                if(val > 1):
                    flag = 1
                    #print(sets)
                    break
               if(flag == 0):
                    dict_s[s[i:j+1]] = len(s[i:j+1])
                    
        #print(dict_s.values())
        
        if(not dict_s):
            return 0
        else:
            return(max(dict_s.values()))

def stringToString(input):
    import json

    return json.loads(input)

def main():
    import sys
    import io
    def readlines():
        for line in io.TextIOWrapper(sys.stdin.buffer, encoding='utf-8'):
            yield line.strip('\n')

    lines = readlines()
    while True:
        try:
            line = next(lines)
            s = stringToString(line);
            
            ret = Solution().lengthOfLongestSubstring(s)

            out = str(ret);
            print(out)
        except StopIteration:
            break

if __name__ == '__main__':
    main()
            
            
