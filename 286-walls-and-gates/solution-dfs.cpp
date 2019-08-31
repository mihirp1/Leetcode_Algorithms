class Solution {
public:
    void wallsAndGates(vector<vector<int>>& rooms) {
        
        /* Find all 0s and mark adjoining INFs to +1 */
        int count = 0;
        int INF = 2147483647;
        
        for(int i = 0 ; i < rooms.size() ; ++i)
        {
            for(int j = 0 ; j < rooms[i].size() ; ++j)
            {
                if(rooms[i][j] == count)
                {
                    
                    dfs(i,j,rooms,count, 2147483647);
                    //break;
                    //std::cout<<"i , j "<<i<<" "<<j<<std::endl;
                    
                }
                
            }
        } 
        
    }
    
    void dfs(int  i ,int j , vector<vector<int>>& rooms,int count, int INF = 2147483647)
    {
        if(i-1 >= 0)
        {
            if(rooms[i-1][j] != -1 && rooms[i-1][j] != 0)
            {
                if(rooms[i-1][j] > (count+1))
                {
                rooms[i-1][j] = count+1;
                dfs(i-1, j, rooms,count+1,2147483647);
                }
            }
        }
        
        if(i+1 <= rooms.size()-1)
        {
            
            if(rooms[i+1][j] != -1 && rooms[i+1][j] != 0)
            {
                if(rooms[i+1][j] > (count+1))
                {               
                    rooms[i+1][j] = count+1;
                    dfs(i+1, j, rooms,count+1,2147483647);
                }
            }
            
        }
            
        if(j+1 <= rooms[i].size()-1)
            {
                if(rooms[i][j+1] != -1 && rooms[i][j+1] != 0)
                {
                    if(rooms[i][j+1] > (count+1))
                    {
                    rooms[i][j+1] = count+1;
                    dfs(i, j+1, rooms,count+1,2147483647);
                    }
                }
            }   
        if(j-1 >= 0)
        {
                if(rooms[i][j-1] != -1 && rooms[i][j-1] != 0)
                {
                   if(rooms[i][j-1] > (count+1))
                    {
                    rooms[i][j-1] = count+1;
                    dfs(i, j-1, rooms,count+1,2147483647);
                   }
                }       
        }
        
        
    }
    
};
