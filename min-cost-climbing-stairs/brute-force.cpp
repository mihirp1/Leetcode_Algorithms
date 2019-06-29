//https://leetcode.com/problems/min-cost-climbing-stairs/
class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        
        //cost[0] = 
        //cost[1] =
        std::map<int,int>dp;
        int k;
        dp[0] = cost[0];
        dp[1] = cost[1];
        int l = cost.size();
            
        for(int i = 2;i<l;++i)
        {
          dp[i] = cost[i] + std::min(dp[i-1], dp[i-2]);  
          //k = cost[i];  
        }
    return(std::min(dp[l-1],dp[l-2]));    
    }
};
