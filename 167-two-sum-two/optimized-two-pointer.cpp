class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        std::vector<int>ar1;
        int l = 0;
        int r = numbers.size()-1;
        
        while(l<r)
        {
            if(numbers[l] + numbers[r] == target)
            {
                std::vector<int>ar{l+1,r+1};
                return ar;
                
            }
            else if(numbers[l] + numbers[r] > target)
            {
                --r;
                
            }
            else
            {
                ++l;
                
            }
            
            
        }
      
        
        return ar1;
    }
};
