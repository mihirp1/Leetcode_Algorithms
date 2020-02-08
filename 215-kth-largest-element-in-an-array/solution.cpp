class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        
        std::sort(nums.begin(),nums.end());
        int count  = 0 ;
        for(auto it = nums.rbegin() ; it != nums.rend() ; ++it)
        {
            ++count;
            if(count == k)
            {
                return *it;
            }
        }
        
        return 0;
        
    }
};
