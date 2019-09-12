//https://leetcode.com/problems/merge-intervals/
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& vec) {
        
        std::vector<std::vector<int>> final_array;
        
        
        if(vec.size()== 0)
        {
            return vec;
        }
        
        std::sort(vec.begin(),vec.end());
        

        std::vector<vector<int>> res;
        res.push_back(vec[0]);
        
        for(int i = 1 ; i < vec.size(); ++i)
        {
                if(vec[i][0] > res[res.size()-1][1] ) 
                {
                    res.push_back(vec[i]);
                
                }
                else if(vec[i][0] <= res[res.size()-1][1] && vec[i][1] > res[res.size()-1][1])
                {
                    res[res.size()-1][1] = vec[i][1];
                
                }
        }
        
        
        
        return res;
        
    }
};
