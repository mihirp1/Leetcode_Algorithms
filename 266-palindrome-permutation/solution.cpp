//https://leetcode.com/problems/palindrome-permutation/

class Solution {
public:
    bool canPermutePalindrome(string s) {
        std::map<char,int>m; 
        int siz = s.size();
        int count=0;
        
        for(int i = 0 ; i < s.size(); ++i)
        {
            if(m.count(s[i]) > 0)
                ++m[s[i]];
            else
                m[s[i]] = 1;
            
        }
        
        for(auto it = m.begin();it != m.end();++it)
        {
            
            if(siz % 2 == 0 && it->second % 2 != 0)
                return false;
            
            else if(siz % 2 != 0 && it->second % 2 != 0)
            {
                ++count;
                   if(count > 1)
                return false;
            }
         
            
        }
        
      return true;  
    }
};
