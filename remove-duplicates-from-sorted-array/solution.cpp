//https://leetcode.com/problems/remove-duplicates-from-sorted-array/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        //int full_size = nums.size();
        //int extra_count = 0;

        sort( nums.begin(), nums.end() );
        nums.erase( unique( nums.begin(), nums.end() ), nums.end() );
        
        return nums.size();   
    }
};
