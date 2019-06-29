class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
      int f1 = cost[0];
      int f2 = cost[1];
      int l = cost.size();
      int current_step;  
      for(int i = 2;i<l;++i)
      {
          current_step = cost[i] + std::min(f1,f2);
          f1 = f2;
          f2 = current_step;
      }
        return std::min(f1,f2);
    }
};
