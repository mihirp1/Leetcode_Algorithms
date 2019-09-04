//https://www.youtube.com/watch?v=i2YKwM9oCcY
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
        vector<short> rows(9);
        vector<short> cols(9);
        vector<short> squares(9);
        short value;
        
        
        for(int i = 0; i < board.size() ; ++i)
        {
            for(int j  = 0 ; j < board[0].size() ; ++j)
            {
                if(board[i][j] != '.')
                {
                    value = 1 << board[i][j] - '1';
                    if((rows[i] & value))
                    {
                       return false; 
                    }
                    
                    if((cols[j] & value))
                    {
                       return false; 
                    }
                    if((squares[3*(i/3) + j/3] & value))
                    {
                       return false; 
                    }
                    
                    rows[i] |= value; 
                    cols[j] |= value; 
                    squares[3*(i/3) + j/3] |= value;
                    
                    
                }
            }
            
        }
        
        return true;
    }
};
