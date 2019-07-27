class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        std::vector<int> minvec;
        
        int gp = 0;
        int sp = 0;
        std::sort(g.begin(),g.end());
        std::sort(s.begin(),s.end());
        int count = 0;
        
        while(gp < g.size() && sp < s.size())
        {
            if(g[gp] <= s[sp])
            {
                ++count;
                ++gp;
                ++sp;
            }

            else if(g[gp] > s[sp])
            {
                ++sp;
            }
            
        }
    return count;
    }        
        
};
