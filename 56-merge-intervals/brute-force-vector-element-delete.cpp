//https://leetcode.com/problems/merge-intervals/
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& vec) {
        
        if(vec.size()== 0)
        {
            return vec;
        }
        
        if(vec.size()== 1)
        {
            return vec;
        }
        
        std::sort(vec.begin(),vec.end());

        int i = 0;
        
        while(i < vec.size()-1)
        {
            
           if(vec[i][1] >= vec[i+1][0]) 
           {
               
                if(vec[i+1][1] >= vec[i][1])
                {
                    vec[i][1] = vec[i+1][1];
                }

               
               vec.erase(vec.begin()+i+1);
               if(i > 0)
               {
               --i;
               }

           }
            else if(i < vec.size()-1)
            ++i;
            
        }
         
        return vec;
        
    }
};
