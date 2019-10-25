class Solution {
public:
    int shortestDistance(vector<string>& words, string word1, string word2) {
        
        int a = 0;
        int b = 0;
        int min = INT_MAX;
        int flag1 = 0;
        int flag2 = 0;
        
        for(int i = 0 ; i < words.size() ; ++i)
        {
            if(words[i] == word1)
            {
                a = i+1;
                flag1 = 1;
            }
            
            if(words[i] == word2)
            {
                b = i+1;
                flag2 = 1;
            }
            
            if(abs(b-a) < min && flag1 == 1 && flag2 == 1)
            {
                min = abs(b-a);
            }
        }
        
        return min;
        
    }
};
