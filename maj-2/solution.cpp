//https://leetcode.com/problems/majority-element-ii/

  vector<int> majorityElement(vector<int>& nums) {        
       std::map<int,int>m;
       std::vector<int>vec; 
        
        for(auto ele:nums)
        {
            m[ele]+=1;
            
        }
     
        for(auto it:m)
        {
                if(it.second > nums.size()/3)
                    vec.push_back( it.first);
        }
        
      return vec;              
    }
