class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int count = 0;
        
        std::unordered_map<int,int> m;
        
        for(int i = 0 ; i < nums.size() ; ++i)
        {
            if(m.count(nums[i]) > 0)
            {
                ++m[nums[i]];
            }
            else
            {
                m[nums[i]] = 1;
            }
            
        }
        
        std::vector<std::pair<int,int>> vec;
        std::vector<int> v;
        
        for(auto it = m.begin() ; it != m.end() ; ++it)
        {
            
            auto p = std::make_pair(it->second,it->first);
            vec.push_back(p);
        }
        
        std::sort(vec.begin(),vec.end(),greater<>());
        
        for(auto it1 = vec.begin() ; it1 != vec.end() ; ++it1)
        {
            ++count;
            v.push_back(it1->second);
            if(count == k)
                return v;
        }
        
        return v;
        
    }
};
