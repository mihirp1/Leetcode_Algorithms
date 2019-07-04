//https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        std::vector<int>ar;
        int i;
        int j;
        int one,two;
        
        for(i =0;i<numbers.size();i++)
        {
        for(j =i+1;j<numbers.size();j++)
        {
            if(i != j && numbers[i] + numbers[j] == target)
            {
               one = i;
               two = j;
               break;     
            }
        }
            
        }
        ar.push_back(one+1);
        ar.push_back(two+1);
        
        return ar;
    }
};
