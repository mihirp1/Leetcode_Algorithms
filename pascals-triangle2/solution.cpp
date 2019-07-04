//https://leetcode.com/problems/pascals-triangle-ii/

class Solution {
public:
    vector<int> getRow(int rowIndex) {
                std::vector<std::vector<int>> main(rowIndex+1);
        //vector<int>unit;
        
        for(int i = 0;i<rowIndex+1;++i)
        {
            main[i].resize(i+1);
            main[i][0] = main[i][i] = 1;
            for(int j=1;j<i;++j)
            {
               main[i][j] = main[i-1][j-1] + main[i-1][j];
            }
            
        }
        
        
       return main[rowIndex]; 
        
    }
};
