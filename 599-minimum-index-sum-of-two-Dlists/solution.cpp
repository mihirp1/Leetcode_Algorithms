//https://leetcode.com/problems/minimum-index-sum-of-two-lists/

class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        
        //std::map<int,std::string> m1;
        //std::map<int,std::string> m2;
        int min = INT_MAX;
        std::vector<std::string> ret;
        
        for(int i = 0 ;i<list1.size();++i)
        {
            for(int j = 0 ;j<list2.size();++j)
             {
            
                if(list1[i] == list2[j])
                    
                { 
                   if((j+i) < min)
                   {
                       if(min != INT_MAX) 
                          ret.clear();
                       min = i+j;
                       
                   }
                   if((j+i) == min)
                   {
                       ret.push_back(list1[i]);
                       
                   }
                }
                    
             }
        }
           return ret; 
        }
        
       
        
       
};
