//https://leetcode.com/problems/longest-common-prefix/

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        

        
        int min = INT_MAX;
        //Find the shortest string.
        string ms = "";
        string l = "";
        int count = 0;
        
        if(strs.size() == 0)
        {
            return l;
        }
        
        for(int i = 0 ; i < strs.size() ; ++i)
        {
            if(strs[i].size() < min)
            {
                min = strs[i].size();
                ms = strs[i];
            }   
        }
        
        for(int i = 0 ; i < min ; ++i)
        {
            char c = ms[i];
            for(int j = 0 ; j < strs.size() ; ++j)
            {
                if(c == strs[j][i])
                {   
                    ++count;
                }
                else
                {
                    return l;
                }
                    
                
            }
            if(count == strs.size())
            {
                l += c;
                
            }
            count = 0;
        }
        
        
       return l;
    }
};
