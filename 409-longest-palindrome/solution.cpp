//https://leetcode.com/problems/longest-palindrome/

class Solution {
public:
    int longestPalindrome(string s) {
        std::map<char,int> m;
        int length = 0;
        int odd_flag = 0;
        
        for(int i = 0 ; i < s.size(); ++i)
        {
            if(m.count(s[i]) > 0)
            {
                ++m[s[i]];
            }
            else
            {
                m[s[i]] = 1;
            }
        }
        
        for(auto it = m.begin(); it != m.end() ; ++it)
        {
            if(it->second % 2 == 0)
                length+= it->second;
            
            else
            {
                length += it->second - 1;
                odd_flag = 1;
            }
        }
        
        if(odd_flag == 1)
        {
            return ++length;
        }
        else
        {
            return length;
        }
        
        
        
    }
};
