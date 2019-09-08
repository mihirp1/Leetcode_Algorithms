//https://leetcode.com/problems/set-matrix-zeroes/

class Solution {
public:
    void setZeroes(vector<vector<int>>& mat) {
        int G = INT_MIN;
        for(int i = 0 ; i < mat.size() ; ++i)
        {
            for(int j = 0 ; j < mat[0].size() ; ++j)
            {
                if(mat[i][j] == 0)
                {
                    int row = i;
                    int col = j;
                    int c = 0;
                    int r = 0;
                    
                    while(c < mat[0].size())
                    {
                        if(mat[row][c] != 0)
                            mat[row][c] = G;
                        ++c;
                    }
                    
                    while(r < mat.size())
                    {
                        if(mat[r][col] != 0)
                            mat[r][col] = G;
                        ++r;
                    }
                    
                }
            }
        }
        
        
        for(int i = 0 ; i < mat.size() ; ++ i)
        {
            for(int j = 0 ; j < mat[0].size() ; ++j)
            {
                if(mat[i][j] == G)
                {
                    mat[i][j] = 0;
                }
            }
        }
        
        
        
        
    }
};
