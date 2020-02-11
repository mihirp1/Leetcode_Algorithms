//https://leetcode.com/problems/n-repeated-element-in-size-2n-array/
class Solution {
public:
    int repeatedNTimes(vector<int>& A) {
        
        std::unordered_map<int,int>m;
        for(int i = 0 ; i < A.size() ; ++i)
        {
            if(m.count(A[i]) > 0)
            {
                ++m[A[i]];
            }
            else
            {
                m[A[i]] = 1;
            }
            
            if(m[A[i]] == A.size()/2)
                return A[i];
            
        }
        
        return 0;
    }
};
