//https://leetcode.com/problems/subsets-ii/
//https://leetcode.com/problems/subsets/discuss/27281/A-general-approach-to-backtracking-questions-in-Java-(Subsets-Permutations-Combination-Sum-Palindrome-Partitioning)
class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        
         vector<vector<int>> main;
        vector<int> temp;
        //int mask = 1;
        //std::set<vector<int>> s;
        sort(nums.begin(),nums.end());
        
     recurse(0, nums, main, temp);   
        
     return main;   
    }

        
        void recurse(int index, vector<int>& nums, vector<vector<int>>& main, vector<int>& temp)
        {
            main.push_back(temp);
            //temp.erase(temp.begin(),temp.end());
            
            for(int i = index ; i < nums.size() ; ++i)
            {
                if( i > index && nums[i] == nums[i-1]) continue;
                
                temp.push_back(nums[i]);
                recurse(i+1, nums, main, temp);
                temp.erase(temp.end()-1);
                
                
            }
            
            
        }
        
        
        
        

};
