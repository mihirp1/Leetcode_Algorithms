//https://leetcode.com/problems/implement-strstr/


class Solution {
public:
    int strStr(string haystack, string needle) {
        
        int nl = needle.length();
        string s1;
        
        if(needle == "" && haystack.length() != 0)
        {
            return 0;
            
        }
        
        
        if(needle == "" && haystack == "")
        {
            
            return 0;
        }
        
        for(int i = 0;i<haystack.length();i++)
            
        {
             //s1 = haystack.substr(i,nl);
            if(haystack.substr(i,nl) == needle)
            {
                
                return i;
            }
            
        }
     return -1;   
    }
};
