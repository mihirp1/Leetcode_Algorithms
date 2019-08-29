//https://leetcode.com/problems/to-lower-case/
class Solution {
public:
    string toLowerCase(string s) {
        string temp = "";
    
        for(int i = 0 ; i < s.size() ; ++i)
        {
            if(s[i] >= 65 && s[i] <= 90)
            {
                temp += s[i] + 32;
            }
            else
            {
                temp += s[i];
            }
        }
        
        return temp;
    }
};
