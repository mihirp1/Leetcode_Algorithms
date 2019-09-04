class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int,int> hash;
        std::vector<int> vec(2);
        
        for(int i = 0 ; i < nums.size() ; ++i)
        {
                
                if(hash.count(target-nums[i]) > 0)
                {
                    //auto it1 = hash.find(nums[i]);
                    auto it1 = hash.find(target-nums[i]);
                    if(it1 != hash.end())
                    {
                        vec = {it1->second,i};
                        return vec;
                    }
                }
                hash[nums[i]] = i;
            
        }    
        
        return vec;
    }
};
