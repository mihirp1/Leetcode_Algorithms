//https://leetcode.com/problems/longest-common-prefix/submissions/
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        string l = "";
        
        if(strs.size() == 0)
        {
            return l;
        }
        
        
        for(int i = 0 ; i < strs[0].size() ; ++i)
        {
            for(int j = 0 ; j < strs.size() ; ++j)
            {
                if(strs[j][i] != strs[0][i])
                {
                    return l;
                }     
                
            }
            
            l+=strs[0][i];
        }
        
        
       return l;
    }
};
