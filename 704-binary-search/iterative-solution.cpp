//https://leetcode.com/problems/binary-search/

class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        int left = 0;
        int right = nums.size() - 1;
        int mid = left + (right - left) / 2;
        
        while(left <= right)
        {
        
            if(nums[mid] == target)
            {
            return mid;
            }
        
            else if( target > nums[mid])
            {
                left = mid + 1;
                mid = left + (right-left)/2; 
            
            }
        
            else
            {
                right = mid-1;
                mid = left + (right-left)/2;
            }
        
        
        }
    return -1;
    }
};
