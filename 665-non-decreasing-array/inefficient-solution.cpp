class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        int count = 0;
        bool flag1 = false;
        int count_already_sorted_case = 0; 
        if(nums.size() ==1) {
            return true;
        }
        
        for(int i = 0 ; i < nums.size()-1; ++i) {
            
            if(nums[i] <= nums[i+1]) {
                ++count_already_sorted_case;
            }
            
            if(nums[i] > nums[i+1]) {
                ++count;
                if(count > 1) {
                    return false;
                }
               
               if( i != 0 && nums[i-1] < nums[i+1]) {
                   flag1 = true;
                   
               } 
                else if (i == 0) {
                    flag1 = true;
                }
                    
            }

        }
        if(flag1 && count == 1) {
            return true;
        }
        
        if(count_already_sorted_case == nums.size()-1) {
            return true;
        }
              
        return false;
    }
};
