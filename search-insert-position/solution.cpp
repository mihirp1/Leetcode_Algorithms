class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
        int l = nums.size();
        int flag = 0;
        for(int i = 0;i<l;i++)
        {
            if(target == nums[i])   
            {           
                         flag = 1;
                         return i;
            }
        }
        if(flag == 0)
        {
            for(int i = 0; i < l;i++)
            {
                if(nums[i] > target)
                {   
                    return i;
                }
            }            
        }
        return l;
    }
};
