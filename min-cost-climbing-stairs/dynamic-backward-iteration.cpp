class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        
        //cost[0] = 
        //cost[1] =
        std::map<int,int>dp;
        //int k;
        int f1=0;
        int f2=0;
        int f3;
        int l = cost.size();
        int i = l-1;    
        while(i>-1)
        {
          f3 = min(f1,f2);
          f2 = f1;
          f1 = cost[i] + f3;
          --i;
        }
    return(std::min(f1,f2));    
    }
};
