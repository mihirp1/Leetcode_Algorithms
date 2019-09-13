//https://leetcode.com/problems/island-perimeter/
class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        
        int count = 0;
        int s = 0;
        for(int i = 0 ; i < grid.size() ; ++i)
        {
            for(int j = 0 ; j < grid[0].size() ; ++j)
            {
                
                    if(grid[i][j] == 1)
                    {
                      s = countsides(grid,i,j); 
                      count +=s;  
                    }
            }
            
        }
        return count;
        
       
        
    }
    
     int countsides(vector<vector<int>>& grid,int i,int j)
        {
            int count = 0;
            if(j-1 == -1)
            {
                ++count;
            }
            else
            {
                if(grid[i][j-1] != 1)
                ++count;
            }
            
            if(i-1 == -1)
            {
                ++count;
            }
            else
            {
                if(grid[i-1][j] != 1)
                ++count;
            }
            
            if(j+1 == grid[0].size())
            {
                ++count;
            }
            else
            {
                if(grid[i][j+1] != 1)
                ++count;
            }
            if(i+1 == grid.size())
            {
                ++count;
            }
            else
            {
                if(grid[i+1][j] != 1)
                ++count;
            }
            
            return count;
        }
    
};
