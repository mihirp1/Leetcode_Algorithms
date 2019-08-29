class Solution {
public:
    int calculateTime(string keyboard, string word) {
        
        std::unordered_map<char,int> kb;
        
        for(int i = 0 ; i < keyboard.size() ; ++i )
        {
            kb[keyboard[i]] = i;
        }
        int prev = 0;
        int sum = 0;
        for(int i = 0 ; i < word.size() ; ++i)
        {
            
            sum += abs(prev - kb[word[i]]);
            prev = kb[word[i]];
        }
        
     return sum;   
    }
};
