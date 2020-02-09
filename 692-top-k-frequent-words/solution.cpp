class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        
        std::vector<std::string> ret;
        std::map<std::string,int> m;
        std::map<int,std::vector<std::string>> m1;
        std::vector<std::pair<int,std::string>> vec;
        
        for(int i = 0; i < words.size() ; ++i)
        {
            if(m.count(words[i]) > 0)
            {
                ++m[words[i]];
            }
            else
            {
                m[words[i]] = 1;
            }
        }
        
        for(auto it = m.begin(); it != m.end() ; ++it)
        {
            auto temp_pair = std::make_pair(it->second,it->first);
            vec.push_back(temp_pair);
        }
        
        std::sort(vec.begin(),vec.end(),greater<>());
        /*
        for(auto i = vec.begin() ; i != vec.end() ; ++i)
        {
            //std::cout<<i->first<<std::endl;
            for(auto i2 = i->second.begin() ; i2 != i->second.end() ; ++i2)
            {
                //std::cout<<*i2;
                //ret.push_back(*i2);
            }
            //std::cout<<std::endl;
            
        }
        */
        
        for(auto it = vec.begin() ; it != vec.end() ; ++it)
        {
            if(m1.count(it->first) > 0)
            {
                 (m1[it->first]).push_back(it->second);    
            }
            else
            {
                vector<string> temp1;
                temp1.push_back(it->second);
                m1.insert(make_pair(it->first, temp1));
            }
            
        }
        int count=0;
        
        //Debug
        /*
         for(auto it = m1.begin() ; it != m1.end() ; ++it)
        {
             std::cout<<it->first<<std::endl;
             for(auto it2 = it->second.begin(); it2 != it->second.end(); ++it2 )
             {
                 //std::cout<< *it2<<",";
             }
             //std::cout<<std::endl;
        }
        */
        
        
        
        //Debug
        
        
        
        
        for(auto it = m1.rbegin() ; it != m1.rend() ; ++it)
        {
            auto vec1 = it->second;
            std::sort(vec1.begin(),vec1.end());
            
            for(auto it2 = vec1.begin(); it2 != vec1.end() ; ++it2)
            {
                ret.push_back(*it2);
                ++count;
                if(count == k)
                {
                    return ret;
                }
            }
        }
        
       
        return ret;
        
        
    }
};
