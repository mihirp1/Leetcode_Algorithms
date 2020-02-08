class Solution {
public:
    string frequencySort(string s) {
        
        std::unordered_map<char,int> m ;
        
        for(int i = 0 ; i < s.length() ; ++i)
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
        
        std::vector<std::pair<int,char>> vec;
        for(auto iter = m.begin(); iter != m.end() ; ++iter)
        {
            auto p = std::make_pair(iter->second,iter->first);
            vec.push_back(p);
        }
        
        std::sort(vec.begin(),vec.end(),greater<>());
        
        //for(auto iter1)
        
        std::string ret;
        
        for(auto it = vec.begin(); it != vec.end() ; ++it)
        {
            for(int i = 0 ; i < it->first ; ++i)
            {
            ret += it->second;
            }
        }
        
        return ret;
    }
};
