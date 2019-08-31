//https://leetcode.com/problems/number-of-distinct-islands/
class Solution {
public:
    int numDistinctIslands(vector<vector<int>>& grid) {
        
        int count = 2;
        
        for(int i = 0 ; i < grid.size(); ++i)
        {
            for(int  j = 0 ; j < grid[i].size() ; ++j)
            {
                if(grid[i][j] == 1)
                {
                    dfs(i , j, grid, count);
                    ++count;
                }
            }
            
        }
        
        
     return count-3;   
    }
    
    
        void dfs(int  i ,int j , vector<vector<int>>& grid,int count)
    {
        if(i-1 >= 0)
        {
            if(grid[i-1][j] == 1)
            {
                grid[i-1][j] = count;
                dfs(i-1, j, grid,count);
            }
        }
        
        if(i+1 <= grid.size()-1)
        {
            
            if(grid[i+1][j] == 1)
            {
                    grid[i+1][j] = count;
                    dfs(i+1, j, grid,count);
            }
            
        }
            
        if(j+1 <= grid[i].size()-1)
            {
                if(grid[i][j+1] == 1)
                {
                    grid[i][j+1] = 1;
                    dfs(i, j+1, grid,count);
                }
            }   
        if(j-1 >= 0)
        {
                if(grid[i][j-1] == 1)
                {
                    grid[i][j-1] = count;
                    dfs(i, j-1, grid,count);
                }
            
            
        }
        
        
    }
    
    
    
    
};
