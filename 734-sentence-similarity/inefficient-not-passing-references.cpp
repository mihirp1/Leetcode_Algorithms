//https://leetcode.com/problems/sentence-similarity/
class Solution {
public:
    
    bool contains(std::map<string,std::set<std::string>> p, std::string s1, std::string s2)
    {
        if(p.count(s1) > 0)
        {
            if(p[s1].count(s2) > 0)
            {
                return true;
            }
        }
        if(p.count(s2) > 0)
        {
            if(p[s2].count(s1) > 0)
            {
                return true;
            }
            
        }
        return false;
    }
    
    
    bool areSentencesSimilar(vector<string>& words1, vector<string>& words2, vector<vector<string>>& pairs) {
        
        std::map<string, set<string>> p;
        
        if(words1.size() != words2.size())
        {
            return false;
        }
        
        for(int i = 0 ; i < pairs.size() ;++i)
        {
            p[pairs[i][0]].insert(pairs[i][1]);
            p[pairs[i][1]].insert(pairs[i][0]);
        }
        
        
        
        
        
        for(int i = 0 ; i < words1.size() ; ++i)
        {
            if(!(contains(p,words1[i],words2[i]) || words1[i] == words2[i]))
            {
                return false;
            }
            
            
        }
        
    return true;    
        
    }
};
