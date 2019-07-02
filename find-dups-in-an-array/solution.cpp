//https://leetcode.com/problems/find-all-duplicates-in-an-array/    

    vector<int> findDuplicates(vector<int>& nums) {
        std::vector<int> vec;
        for(int i = 0;i<nums.size();++i)
        {
            nums[abs(nums[i]) -1] = -nums[abs(nums[i])-1];  
             if(nums[abs(nums[i])-1] > 0)
            {
                vec.push_back(abs(nums[i]));   
            }
        }

        return vec;
    }
