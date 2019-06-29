//https://leetcode.com/problems/contains-duplicate/


class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        std::map<int,int> hash;
        
        if(nums.size() == 0 || nums.size() == 1)
        {
            
            return false;
        }
        
        for(auto i :nums)
        {
            if(hash.count(i) > 0)
            {
                std::cout<<"Found "<<i<<std::endl; 
                return true;
                
            }
            else
            {
                hash.insert({i,0});
                std::cout<<"Adding "<<i<<std::endl; 
                
            }
            
        }
        return false;
        
    }
};
