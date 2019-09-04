//Two Pointer solution is not stable. It will change the original order of non-zero elements

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j = 0;
        
       for(int i  = 0 ; i < nums.size() ; ++i)
       {
           //j = i+1;
           if(nums[i] == 0)
           {
                              
                for(int j = i+1  ; j < nums.size() ; ++j )
                {
                    if(nums[j] != 0)
                    {
                    std::swap(nums[j],nums[i]);
                        break;
                    }
                }
           }
           /*
           std::cout<<"i value = "<<i<<" ";
           for(int k = 0 ; k < nums.size() ; ++k)
           {
               std::cout<<nums[k] << " ,";
           }
           std::cout<<std::endl;
           */
       }
        
      
        
    }
};
