//https://leetcode.com/problems/valid-anagram/

class Solution {
public:
    bool isAnagram(string s, string t) {
        
        unordered_map<char,int> hash;
        
        for(int i = 0 ; i < s.size() ; ++i)
        {
            if(hash.count(s[i]) > 0)
                ++hash[s[i]];
            
            else
            {
                hash[s[i]] = 1;
            }
        }
        
        
        for(int i = 0 ; i < t.size() ; ++i)
        {
            if(hash.count(t[i]) > 0)
            {
                --hash[t[i]];
                if(hash[t[i]] == 0)
                {
                    auto it = hash.find(t[i]);
                    hash.erase(it);
                }
                
            }
            else
            {
                return false;
            }
            
        }
        
        if(hash.size() == 0)
        {
            return true;
        }
        
        else
        {
            return false;
        }
        
        
        
    }
};
