class Solution {
public:
    int findMin(vector<int>& nums) {
        /*
        if(nums.size() == 1)
        {
            return nums[0];
        }
        */
        
        int min = 100000;
        int i = 0;
        while(i < nums.size())
        {
            if(nums[i] < min)
            {
                min = nums[i];
            }
            ++i;
        }
     return min;   
    }
};
