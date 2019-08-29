//https://leetcode.com/problems/ransom-note/

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        
        int i = 0;
        int j = 0;
        int count = 0;
        std::unordered_map<char,int> m ;
        
for(int i = 0 ; i < magazine.size() ; ++i )
{
    
    if(m.count(magazine[i]) > 0)
    ++m[magazine[i]];
    else
    {
        m[magazine[i]] = 1;
    }
    
}
/*        
for(auto it = m.begin() ; it != m.end() ; ++it)
{
    std::cout<<it->first<<" "<<it->second<<std::endl;
}

*/
        
        
for(int i = 0 ; i < ransomNote.size() ; ++i)
{
    if(--m[ransomNote[i]] < 0 )
    
        
    //}
    //else
        return false;
    
    if(m[ransomNote[i]] < 0)
    {
        return false;
    }
    
}
        
   return true;     
    }
};
