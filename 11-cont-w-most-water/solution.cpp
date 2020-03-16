class Solution {
public:
    int maxArea(vector<int>& height) {
        
        
        int max_val = 0;
        
        int l = 0;
        int r = height.size() -1;
        
        while(l < r) {  
            max_val = max(max_val, min(height[l],height[r]) * (r-l));
            if( height[l] <= height[r] ) {
                ++l;
            }
            else {
                --r;
            }
            
        }
     return max_val;   
    }
};
