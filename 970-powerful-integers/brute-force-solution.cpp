//https://leetcode.com/problems/powerful-integers/

class Solution {
public:
    vector<int> powerfulIntegers(int x, int y, int bound) {
        int n = bound;
        std::vector<int>vec;
        int count = 0;
        std::map<int,int>m;
        while(count <= bound)
        {
        for(int i = 0;i<n;++i)
        {
            
            for(int j = 0;j<n;++j)
            {
                if(m.count(count) == 0)
                {
                int num = pow(x,i) + pow(y,j);
                
             if(num == count)
             {
                 m[count] = 1;
                 vec.push_back(num);
                 break;
             }
            }
            }
        }
            ++count;
        }
    return vec;    
    }
    
};
