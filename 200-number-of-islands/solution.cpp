//https://leetcode.com/problems/number-of-islands/
class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        
        int count = 1;
        //char c;
        for(int i = 0 ; i < grid.size() ; ++i)
        {
            for(int j = 0 ; j < grid[i].size() ; ++j)
            {
                if(grid[i][j] == '1')
                {
                    //c = char(count);
                    //std::cout<<"Character : "<<c<<" "<<std::endl;
                    grid[i][j] = 'I';
                    
                    dfs(i, j, grid,count);
                    ++count;
                /*    
                for(int x = 0 ; x < grid.size() ; ++x)
                {
                    for(int y = 0 ; y < grid[x].size() ; ++y)
                    {
                        std::cout<<grid[x][y]<<" ";
                    }
                    std::cout<<std::endl;
                }
                */
                    
                }
            }
            
        }
        
        
        return count-1;
    }
    
    void dfs(int  i ,int j , vector<vector<char>>& grid,int count)
    {
        if(i-1 >= 0)
        {
            if(grid[i-1][j] == '1')
            {
                grid[i-1][j] = 'I';
                dfs(i-1, j, grid,count);
            }
        }
        
        if(i+1 <= grid.size()-1)
        {
            
            if(grid[i+1][j] == '1')
            {
                    grid[i+1][j] = 'I';
                    dfs(i+1, j, grid,count);
            }
            
        }
            
        if(j+1 <= grid[i].size()-1)
            {
                if(grid[i][j+1] == '1')
                {
                    grid[i][j+1] = 'I';
                    dfs(i, j+1, grid,count);
                }
            }   
        if(j-1 >= 0)
        {
                if(grid[i][j-1] == '1')
                {
                    grid[i][j-1] = 'I';
                    dfs(i, j-1, grid,count);
                }
            
            
        }
        
        
    }
    
    
};
