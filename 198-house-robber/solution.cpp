// https://www.youtube.com/watch?v=xlvhyfcoQa4&t=302s
//https://leetcode.com/problems/house-robber/
class Solution {
public:
    int rob(vector<int>& nums) {
        std::vector<int> vec(nums.size());
        
        if(nums.size()==0)
        {
            return 0;
        }
        
        if(nums.size() == 1)
        {
            return nums[0];
        }
        else if(nums.size() == 2)
        {
            return (nums[0]<nums[1]?nums[1]:nums[0]);
        }
        
        vec[0] = nums[0];
        vec[1] = nums[0]<nums[1]?nums[1]:nums[0];
        
        for(int i = 2 ; i < vec.size() ; ++i)
        {
            vec[i] = std::max(vec[i-2] + nums[i], vec[i-1]);
        }
        
        
        return vec[vec.size()-1];
            
    }
};
