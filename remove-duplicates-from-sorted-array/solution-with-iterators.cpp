//https://leetcode.com/problems/remove-duplicates-from-sorted-array/


class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        //int full_size = nums.size();
        //int extra_count = 0;
        int j;
        std::map<int,int> hash;
        for(auto it = nums.begin();it != nums.end();)
        {
            if(hash.count(*it) > 0)
            {
                it = nums.erase(it);
            }
            else
            {
                
                hash.insert({*it,*it});
                it++;
            }
        //j++;    
        }
        
        
        
    return nums.size(); 
    }
               
};
