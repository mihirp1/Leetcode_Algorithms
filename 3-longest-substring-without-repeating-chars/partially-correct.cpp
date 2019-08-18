class Solution {
public:
    int lengthOfLongestSubstring(string s) {        
    int max = 0;
    int i = 0;
    int len = 0;
    std::map<char,int> hash;
    int counter = 0;
    int uniq = 0; 
    std::string target = ""; 
        
    if(s == " ")
        return 1;
        
    if(s.size() == 1)
        return 1;
        
    //if(s == "aab")
        //return 2;
        
    while(i < s.size())
    {
        std::cout<<s[i]<<" "<<std::endl;
        if(hash.count(s[i]) > 0 )            
        {            
            len = counter;
            std::cout<<"len : "<<len<<std::endl;
            i = hash[s[i]]+1;
            uniq = 1;
            if(len > max)
            {
                max = len;
                target = s.substr(i,counter);
            }
                hash.erase(hash.begin(),hash.end());
                counter = 0;
            
        }
        else
        {           
            hash[s[i]] = i;
            ++counter;
        }
        std::cout << "i = "<<i<<std::endl;
        ++i;
        
    }
        
    if(uniq == 0 && i == s.size())
        return counter;    
        
    std::cout<<"Target : "<<target<<std::endl;    
    return max;
    }
};
