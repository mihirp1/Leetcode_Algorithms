class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
        std::sort(nums.begin(),nums.end());
        int i  = 0;
        
        while(i < nums.size()-1 )
        {
            if(nums[i] == nums[i+1])
            {
                return nums[i];
            }
            ++i;
        }
    return 0;    
    }
    
};
