//https://leetcode.com/problems/majority-element/
 int majorityElement(vector<int>& nums) {
        std::map<int,int>m;
        
        for(auto ele:nums)
        {
            m[ele]+=1;
            
        }
        int max = 0;
        for(auto it:m)
        {
            std::cout<<(it.second)<<std::endl;
            if(it.second>max)
            {
                max = it.second;
                if(max > nums.size()/2)
                    return it.first;
            }
        }
        
      return 0;  
    }
