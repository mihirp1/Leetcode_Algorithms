//https://leetcode.com/problems/find-the-difference/

class Solution {
public:
    char findTheDifference(string s, string t) {
        string ns = s + t;
        int num = ns[0];
        
        for(int i = 1;i<ns.size();++i)
        {
            num ^= ns[i];
            
        }
        
        return num;
        
        
    }
};
