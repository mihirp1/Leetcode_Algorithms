//https://leetcode.com/problems/longest-common-prefix/

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        //string n = st;
        int min = 100000000;
        string shortest;
        int count;
        int i ;
        for(auto l:strs)
        {
            if(l.length() < min)
            {
                min = l.length();
                shortest = l;
                
            }
            
        }
        std:cout << shortest << " "<< min<<std::endl; 
        i = min;
        
        while(i > 0)
        {
           for(auto st:strs)
            {
            
               std::cout<<st<<std::endl;
               if(shortest.substr(0,i) == st.substr(0,i))
               {
                 count += 1;
                 std::cout <<  "Possible Longest : " <<shortest.substr(0,i) <<std::endl;
                   
               }
            }
            if(count == strs.size())
            {
                std::cout << "Surely Found One!" << std::endl;
                break;
            }
            count = 0;
               
               
            i--;
        }
     return shortest.substr(0,i);   
    }
};
