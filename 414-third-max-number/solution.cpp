class Solution {
public:
    int thirdMax(vector<int>& nums) {
        
        std::map<int,int> m ;
        
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
        
        //std::cout << "Debug" <<std::endl;
        
        /*
        for(auto it = m.begin() ; it != m.end() ; ++it)
        {
            //std::cout << it->first << "," << it->second <<std::endl;
        }
        std::cout<<m.rbegin()->first<<","<<m.rbegin()->second<<std::endl;
        */
        if(m.size() < 3)
        {
            //std::cout<<"Phase 1"<<std::endl;
            return (--m.end())->first;
        }
        
        else
        {
            auto it = m.end();
            it--;it--;it--;
            //std::cout<<"Phase 2"<<std::endl;
            return((it)->first);
            
        }
        
        
        return 0;
    }
};
