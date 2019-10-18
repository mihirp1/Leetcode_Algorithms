//https://www.youtube.com/watch?v=sEQk8xgjx64
//https://www.youtube.com/watch?v=ER4ivZosqCg
//https://www.youtube.com/watch?v=BOt1DAvR0zI
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int l = 0;
        int m = 0;
        int h = nums.size() - 1;
        
        while(m <= h)
        {
            if(nums[m] == 0)
            {
                swap(nums[m],nums[l]);
                ++m;
                ++l;
            }
            else if (nums[m] == 1)
            {
                ++m;
            }
            
            else
            {
                swap(nums[m],nums[h]);
                --h;
                
            }
            
        }
        
        
        
        
    }
};
