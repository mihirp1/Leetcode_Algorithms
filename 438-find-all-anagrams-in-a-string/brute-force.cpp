//https://leetcode.com/problems/find-all-anagrams-in-a-string/
class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        std::vector<int> res;
        
        if(s.size() == 0)
        {
            return res;
        }
        
        if(s.size() < p.size())
        {
            return res;
        }
        
        
        std::sort(p.begin(),p.end());
        std::string temp = "";
        std::cout << p.size()<<" " << s.size()<< std::endl;

        for(int i = 0 ; i <= s.size() - p.size(); ++i)
        {
            temp  = s.substr(i,p.size());
            //orig = temp;
            std::cout << temp << std::endl;
            std::sort(temp.begin(),temp.end());
            if(temp  == p)
            {
               res.push_back(i);
            }
        }
        
        
        
        
        
        return res;
    }
};
