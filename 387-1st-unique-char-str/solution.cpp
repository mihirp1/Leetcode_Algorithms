//https://leetcode.com/problems/first-unique-character-in-a-string/

class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int> nos;
        
        for(int i = 0; i < s.size() ; ++i)
        {

            if(nos.count(s[i]) > 0)
            {
                ++nos[s[i]];
                
            }
            else
            {
                nos[s[i]] = 1;

            }
        }
        
          for(int i = 0; i < s.size() ; ++i)
        {

            if(nos[s[i]] == 1)
            {
                return i;
                
            }

        }
        
        return -1;
        
    }
};
