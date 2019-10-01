class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        
        vector<vector<int>> main;
        vector<int> temp;
        //int mask = 1;
        
        recurse(temp, 0, main, nums); 
            
        return main;
        
    }
    
    
     void recurse(vector<int>& temp, int index, vector<vector<int>>& main, vector<int>& nums)
    {
         
        main.push_back(temp); 
         //temp.erase(temp.begin(),temp.end());
        for(int i = index; i < nums.size() ; ++i)
        {
            temp.push_back(nums[i]);
            recurse(temp, i+1, main, nums);
            temp.erase(temp.end()-1);
        }
        
    }
    
};
