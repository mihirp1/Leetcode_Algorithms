class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        std::map<int,char> hash; 
        std::map<int,char> mainhash;
        int j;
        int max = 0;
        int repeat_found = 0;
        if(s == " ")
        {
            
            return 1;
        }
        
        if(s.length() == 1)
        {
            
            return 1;
        }
            
        for(int i = 0; i < s.length(); i++)                        
        {   
            j = i;
            std::cout << "Outside : "<< s[i]<<std::endl;
            while( j < s.length())
            {
                std::cout << "Count : " << hash.count(s[j]) << s[i] << " "<<s[j] <<std::endl;
                if(hash.count(s[j]) > 0)
                {
                    repeat_found = 1;
                    //std::cout << "Repeat Found!! " << s[j] <<std::endl;
                    hash.clear();
                     if (j-i > max )
                     {
                    
                    max = j - i;
                     }
                    break;
                }
                else
                {
                    hash.insert(std::pair<char,int>(s[j],j));
                    mainhash.insert(std::pair<char,int>(s[j],j));
                    //std::cout << s[j] <<std::endl;
   
                }   
                //if(s.begin(),s.end(),s[i]) 
                
               
                j++;
            }
            hash.clear();
           
            
        }
        if(repeat_found == 0) 
        {
          return s.length();
        }
        return max;
    }
};
