//https://leetcode.com/problems/surrounded-regions/
class Solution {
public:
    void solve(vector<vector<char>>& board) {
        
        
        if(board.size() > 0)
        {
            
        
        
        for(int i = 1 ; i  < board.size()-1 ; ++i)
        {
            for(int j = 1 ; j < board[i].size()-1 ; ++j)
            {
                if(board[i][j] == 'O')
                {
                    if (bfs(i,j,board))
                    {
                        
                        board[i][j] = 'X';                        
                         dfs(i,j,board); 
                        
                    }
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
    
    
    
    bool bfs(int i, int j, vector<vector<char>>&board)
    {
        
         if(i-1 >= 0)
        {
            if(board[i-1][j] == 'O' &&  isBoundary(i-1, j , board.size(), board[i].size()))
            {
                return false;
            }
            else if(board[i-1][j] == 'X' &&  !isBoundary(i-1, j , board.size(), board[i].size()))
            {
                bfs(i-1,j,board);
            }
        }

        
        if(i+1 <= board.size()-1)
        {
            
            if(board[i+1][j] == 'O' &&  isBoundary(i+1, j , board.size(), board[i].size()))
            {

                return false;
            }
            else if(board[i+1][j] == 'X' &&  !isBoundary(i+1, j , board.size(), board[i].size()))
            {
                bfs(i+1,j,board);
            }
            
        }
            
        if(j+1 <= board[i].size()-1)
            {
                if(board[i][j+1] == 'O' &&  isBoundary(i, j+1 , board.size(), board[i].size()))
                {
    
                    return false;
                }
                else if(board[i][j+1] == 'X' &&  !isBoundary(i, j+1 , board.size(), board[i].size()))
                {
                    bfs(i,j+1,board);
                }
            }   
        if(j-1 >= 0)
        {
                if(board[i][j-1] == 'O' &&  isBoundary(i, j-1 , board.size(), board[i].size()))
                {
                    return false;

                }
                else if(board[i][j-1] == 'X' &&  !isBoundary(i, j-1 , board.size(), board[i].size()))
                {
                    
                    bfs(i,j-1,board);
                }
            
            
        }
        
        return true;
    }
    
    
        void dfs(int  i ,int j , vector<vector<char>>& board)
    {
        if(i-1 >= 0)
        {
            if(board[i-1][j] == 'O' && !isBoundary(i-1, j , board.size(), board[i].size()))
            {
                board[i-1][j] = 'X';
                dfs(i-1, j, board);
            }
        }
        
        if(i+1 <= board.size()-1)
        {
            
            if(board[i+1][j] == 'O' && !isBoundary(i+1, j , board.size(), board[i].size()))
            {
                    board[i+1][j] = 'X';
                    dfs(i+1, j, board);
            }
            
        }
            
        if(j+1 <= board[i].size()-1)
            {
                if(board[i][j+1] == 'O' && !isBoundary(i, j+1 , board.size(), board[i].size()))
                {
                    board[i][j+1] = 'X';
                    dfs(i, j+1, board);
                }
            }   
        if(j-1 >= 0)
        {
                if(board[i][j-1] == 'O' && !isBoundary(i, j-1 , board.size(), board[i].size()))
                {
                    board[i][j-1] = 'X';
                    dfs(i, j-1, board);
                }
            
            
        }
        
        
    }
    
    
        
    
    
};
