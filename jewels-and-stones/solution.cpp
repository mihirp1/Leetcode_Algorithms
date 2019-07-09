//https://leetcode.com/problems/jewels-and-stones/
class Solution {
public:
    int numJewelsInStones(string J, string S) {
        
        std::map<char,int>store;
        int l1 = J.size();
        int l2 = S.size();
        
        for(int i = 0;i < l1 ;++i)
        {
                store[J[i]] = 1;
            
        }
        int count = 0;
        for(int j = 0; j < l2; ++j)
        {
            if(store.count(S[j]) > 0)
                ++count;
            
        }
        return count;
    }
};
