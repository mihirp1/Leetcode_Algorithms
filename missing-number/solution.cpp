//
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum;
        int n = nums.size();
        int sum2 = 0;
        for(int i = 0;i < n+1;++i)
        {
            sum2 += i;
        }
             
    return sum2-std::accumulate(nums.begin(),nums.end(),0);    
    }
};
