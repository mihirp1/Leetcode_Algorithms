//https://leetcode.com/problems/surrounded-regions/submissions/
class Solution {
public:
    void solve(vector<vector<char>>& board) {
        
        
        if(board.size() > 0)
        {
            
        /* Setting Boundary Os to * (Star) */
        
        for(int i = 0 ; i  < board.size() ; ++i)
        {
            for(int j = 0 ; j < board[i].size() ; ++j)
            {
                if(board[i][j] == 'O' && isBoundary(i,j,board.size(),board[i].size()))
                {
 
                        board[i][j] = '*';                        
                         dfs(i,j,board); 
                        
       
                }
            }
            
            
        }
           
        
    /* Setting Inner Os to Xs */
        
         for(int i = 1 ; i  < board.size()-1 ; ++i)
        {
            for(int j = 1 ; j < board[i].size()-1 ; ++j)
            {
                if(board[i][j] == 'O')
                {
                        board[i][j] = 'X';                        
                         //dfs(i,j,board);        
                }
            }
            
            
        }
        
        
// Resetting * to 'O'
        
        
        for(int i = 0 ; i  < board.size() ; ++i)
        {
            for(int j = 0 ; j < board[i].size() ; ++j)
            {
                if(board[i][j] == '*')
                {

                        board[i][j] = 'O';                        

                        
                }
            }
            
            
        }
            
    }
        
        
        
        
        
    
    }
    bool isBoundary(int l, int m, int sizex, int sizey)
    {
        if(l == 0 || l == sizex-1 || m == 0 || m == sizey-1)
        {
            return true;
        }
        
        return false;
        
    }

    
        void dfs(int  i ,int j , vector<vector<char>>& board)
    {
        if(i-1 >= 0)
        {
            if(board[i-1][j] == 'O')
            {
                board[i-1][j] = '*';
                dfs(i-1, j, board);
            }
        }
        
        if(i+1 <= board.size()-1)
        {
            
            if(board[i+1][j] == 'O')
            {
                    board[i+1][j] = '*';
                    dfs(i+1, j, board);
            }
            
        }
            
        if(j+1 <= board[i].size()-1)
            {
                if(board[i][j+1] == 'O')
                {
                    board[i][j+1] = '*';
                    dfs(i, j+1, board);
                }
            }   
        if(j-1 >= 0)
        {
                if(board[i][j-1] == 'O')
                {
                    board[i][j-1] = '*';
                    dfs(i, j-1, board);
                }       
        }
        
        
    }
    
};
