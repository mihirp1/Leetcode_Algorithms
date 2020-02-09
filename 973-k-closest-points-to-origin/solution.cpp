//https://leetcode.com/problems/k-closest-points-to-origin/

class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int K) {
        
        vector<std::pair<double,vector<int>>> k_closest;
        vector<vector<int>> m;
        for(int i = 0 ; i < points.size() ; ++i)
        {
            auto temp = (std::sqrt(std::pow(0-points[i][0],2) + std::pow(0-points[i][1],2)));
            std::vector<int> inner;
            inner.push_back(points[i][0]);
            inner.push_back(points[i][1]);
            
            
            auto p = std::make_pair(temp,inner);
            inner.erase(inner.begin(),inner.end());
            k_closest.push_back(p);
            
        }
            
            std::sort(k_closest.begin(),k_closest.end());
            int count = 0;
            
            for(auto it = k_closest.begin() ; it != k_closest.end() ; ++it)
            {
                m.push_back(it->second);
                ++count;
                if(count == K)
                {
                    return m;
                }
            }
            
            
        
        
     return m;   
    }
};
