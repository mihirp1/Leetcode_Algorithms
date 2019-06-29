//https://leetcode.com/problems/contains-duplicate-ii/

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        for ( int i = 0; i < nums.size();i++)
        {
            
            for( int j = 0; j < nums.size();j++)
            {
                if(i != j)
                {
                    if(nums[i] == nums[j] && abs(i-j) <= k)
                    {
                        std::cout << i << " "<<j<<std::endl;
                        return true;
                    }
                    
                    
                }
                
            }
        }
        return false;
    }
};
