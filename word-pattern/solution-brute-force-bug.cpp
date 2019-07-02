//https://leetcode.com/problems/word-pattern/
class Solution {
public:
    bool wordPattern(string pattern, string str) {
    std::unordered_map<char,int>mp;
    std::unordered_map<std::string,int>ms;
        
    std::string buf;           
    std::stringstream ss(str);     

    std::vector<std::string> tokens; 

    while (ss >> buf)
    {
        tokens.push_back(buf);
    }    
    
    for(auto sa:pattern ) 
    {
        mp[sa] += 1;   
    //std::cout <<sa<<" "<<mp[sa]<<std::endl;
    }
        
    for(auto sb:tokens)
    {
        ms[sb] += 1;   
        //std::cout <<sb<<" "<<ms[sb]<<std::endl;
    }
    std::string s1 = "";   
    std::string s2 = "";    
        
    for(auto it = ms.begin();it != ms.end();it++ )
    {
        std::cout<<it->second<<" "<<it->first<<std::endl;
        s1 += std::to_string(it->second);
        //std::cout<<s1<<std::endl;
    }
        std::cout<<"#####"<<std::endl;
        
        for(auto it = mp.begin();it != mp.end();it++ )
    {
        std::cout<<it->second<<" "<<it->first<<std::endl;
        s2 += std::to_string(it->second);
        //std::cout<<s2<<std::endl;
    }    
        
    //std::cout<<"First: "<<s1<<"size:"<<s1.size()<<std::endl;
    //std::cout<<"Second: "<<s2<<"size:"<<s2.size()<<std::endl;    
    if(s1 == s2)
      {
       return true;
      }
    
    return false;
    }
    
};
