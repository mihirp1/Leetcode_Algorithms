//https://leetcode.com/problems/robot-return-to-origin/
class Solution {
public:
    bool judgeCircle(string moves) {
        
        int x = 0;
        int y = 0;
        
        for(int i = 0 ; i < moves.size() ; ++i)
        {
            if(moves[i] == 'U')
            {
                y+=1;
            }
            else if(moves[i] == 'D')
            {
                y-=1;
            }
            else if(moves[i] == 'R')
            {
                x+=1;
            }
            else
            {
                x-=1;
            }
            
        }
        
        if(x == 0 && y == 0)
        {
            return true;
        }
        
        return false;
    }
};
