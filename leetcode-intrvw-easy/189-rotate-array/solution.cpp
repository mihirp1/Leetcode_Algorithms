//https://leetcode.com/problems/rotate-array/
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
        if(k > nums.size())
        {
           k = k % nums.size(); 
        }
        
        if(nums.size() == 1 || nums.size() == 0)
        {
            return;
        }       
        
        for(int i = 0 ; i < nums.size()/2 ; ++i)
        {
            std::swap(nums[i],nums[nums.size()-1-i]);
        }
        //First Numbers reverse
        for(int i = 0 ; i < k/2 ; i++)
        {
            std::swap(nums[i],nums[k-1-i]);
        }
        //Last Numbers Reverse
        for(int i = k ; i < (k + nums.size())/2 ; ++i)
        {
            std::swap(nums[i], nums[nums.size()+k-i-1]);
        }        
        //Print
        for(int i = 0 ; i < nums.size() ; ++i)
        {
            std::cout << nums[i]<<std::endl;
        }
    
    }
};
