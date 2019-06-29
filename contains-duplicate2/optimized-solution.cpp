//https://leetcode.com/problems/contains-duplicate-ii/



class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
  std::map<int,vector<int>> hash;
    std::vector<int> index_vec;        
        for (int i = 0; i<nums.size(); i++)
        {
                    if(hash.count(nums[i]) > 0)
                    {
                       hash[nums[i]].push_back(i);                  
                    }
                    else
                    {   
                        index_vec.push_back(i);
                        hash.insert({nums[i],index_vec});
                        //index_vec.clear();
                    }
            index_vec.clear();
        }
        std::cout << "Lets check the hashmap"<<std::endl;
        for(auto h1:hash)
        {
            std::cout<<std::endl; 
            std::cout<< "Key: "<<h1.first<<std::endl; 
            for(auto v : h1.second)
            {
            
                    std::cout<<v<<" ";           
                
            }
            std::cout<<std::endl;
            
        }
        
        
        for(auto it = hash.begin();it != hash.end();it++)
        {
                   if(((*it).second).size() != 1)
                   {
                    std::cout << "The number : " <<(*it).first<< " Size "<<((*it).second).size() <<std::endl;
                    for(auto a:(*it).second)
                         {
                           if(((*it).second).size() != 1)
                              {
                                std::cout<< "Indices : "<<a<<std::endl;
                               if(((*it).second).size() != 1)
                               {    
                               for(auto b:(*it).second)
                                  {
                                     std::cout<< "Indices : "<<b<<std::endl;                    
                                        if(abs(b - a) <= k && b !=a)
                                              {
                                                std::cout << a << "The two "<<b<<std::endl;
                                                return true;                        
                                              }                                
                                  }
                
                               }
                              }
                              std::cout<<std::endl;            
                          }
                   }
        }

        return false;
    }
};
