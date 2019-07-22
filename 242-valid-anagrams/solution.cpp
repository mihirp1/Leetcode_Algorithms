//https://leetcode.com/problems/valid-anagram/
class Solution {
public:
    bool isAnagram(string s, string t) {
        std::map<char,int> m1;
        std::map<char,int> m2;
        
        if(s.size() == 0 && t.size() == 0)
            return true;
        
        for(int i = 0 ;i <s.size();++i)
        {
            if(m1.count(s[i]) > 0)
                ++m1[s[i]];
            else
                m1[s[i]] = 1;
            
        }
        
        for(int i = 0 ;i <t.size();++i)
        {
            if(m2.count(t[i]) > 0)
                ++m2[t[i]];
            else
                m2[t[i]] = 1;
            
        }
        
        
        return((m1 == m2));
    }
};
