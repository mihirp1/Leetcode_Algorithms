//https://leetcode.com/problems/remove-vowels-from-a-string/
class Solution {
public:
    string removeVowels(string s) {
        
        std::string temp = "";
        for(int i = 0 ; i < s.size() ; ++i)
        {
            if(s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u')
            temp += s[i];
        }
        
        
        
    return temp;    
    }
};
