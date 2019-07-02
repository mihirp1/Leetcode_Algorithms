//https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        std::vector<int> arr;
        std::set<int>s(nums.begin(),nums.end());
        
        for(int i = 1;i<nums.size()+1;++i)
        {
           if(!(s.count(i)))
               arr.push_back(i);
               
        }
   
        return arr;
    }
