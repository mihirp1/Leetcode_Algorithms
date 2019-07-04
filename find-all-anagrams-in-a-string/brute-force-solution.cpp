//https://leetcode.com/problems/find-all-anagrams-in-a-string/
class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        std::vector<int> res;
        
        if(s.empty())
        {
            return res;
            
        }
        
        if(s.size() < p.size())
        {
            return res;
            
        }
        
        
        string p_orig = p;
        std::sort(p.begin(),p.end());
        
        for(auto it = s.begin();it != (s.end()-p.size()+1);++it)
        {
            auto anag = s.substr(it-s.begin(),p.size());
            std::sort(anag.begin(),anag.end());
            if(anag == p){
            std::cout<<anag<<std::endl;
                res.push_back(it-s.begin());
            }
        }
        
        return res;
    }
};
