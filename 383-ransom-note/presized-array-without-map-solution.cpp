//https://leetcode.com/problems/ransom-note/

/* Version which uses */

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        
vector<int> vec(26);
//std::cout<<vec.size()<<std::endl;
        
        for (int i = 0; i < magazine.size(); ++i)
            ++vec[magazine[i] - 'a'];
        for (int j = 0; j < ransomNote.size(); ++j)
            if (--vec[ransomNote[j] - 'a'] < 0)
                return false;
        return true;
    }
};	
