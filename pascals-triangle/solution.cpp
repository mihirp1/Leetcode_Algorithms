//https://leetcode.com/problems/pascals-triangle/
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        std::vector<std::vector<int>> main(numRows);
        //vector<int>unit;
        
        for(int i = 0;i<numRows;++i)
        {
            main[i].resize(i+1);
            main[i][0] = main[i][i] = 1;
            for(int j=1;j<i;++j)
            {
               main[i][j] = main[i-1][j-1] + main[i-1][j];
            }
            
        }
        
        
       return main; 
        
    }
};
