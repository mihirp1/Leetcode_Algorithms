//https://leetcode.com/problems/maximum-subarray/
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max=-1000;
        int i ;
        int temp_max;
        int l = nums.size();
        
        if(l == 1)
        {
            
            return *nums.begin();
        }
        
        
        for(auto it = nums.begin();it!=nums.end();it++)
        {
            i = it - nums.begin();
            while(i<l)
            {
                temp_max += nums[i];
                //temp_max = std::accumulate(sub.begin(),sub.end(),0);
                
                if(temp_max > max)
                {
                    max = temp_max;                    
                }
                //std::cout << "The Array : "<<std::endl;
                /*
                for(auto it1 = sub.begin();it1 != sub.end();it1++)
                {
                    std::cout << *it1<< " ";                    
                }
                std::cout<<std::endl; 
                */
                i++;
                
            }
            temp_max = 0;
            
        }
        return max;
        
    }
    
};
