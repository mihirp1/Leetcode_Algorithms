//https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/
//https://www.youtube.com/watch?v=RlXtTF34nnE

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) { 
        
     int first_occurrence = 0;
     int last_occurrence = 0;
     vector<int> vec;
     int first, last;
     
     if(nums.size() ==1)
     {
         if(target == nums[0])
         {
             vec = {0,0};
             return vec;
         }
         else
         {
             vec = {-1,-1};
             return vec;
         }
         
     }
        
        
     if(nums.size()==0)
     {
         vector<int >vec = {-1,-1};
         return vec;
     }
        
     int result = binarysearch(nums,target, 0, nums.size() - 1);
     if(result == -1)
     {
         vec = {-1,-1};
         return vec;
     }
        
      if(nums.size() == 2)
      {
          if(nums[0] == nums[1] == target)
          {
              vec = {0,1};
              return vec;
          }
          else
          {
              
          }
      }
        
        
        
        
        
                                                            
     result = binarysearch(nums,target, 0, nums.size() - 1);
        
     if(nums.size() > 1)
     {
        if(result == nums.size()-1)
        {
                if(nums[result] != nums[result-1])
                {
                vec = {result,result};    
                return vec;
                }
        }
        
        if(result == 0 )
        {
                if(nums[result] != nums[result+1])
                {
                vec = {result,result}; 
                return vec;
                }
        }
        
     }    
    if(result == -1)
     {
         vector<int> vec = {-1,-1};
         return vec;
     }   
                                                            
     if(result - 1 >= 0 && result + 1 <= nums.size())
     {
        if(nums[result] != nums[result+1] && nums[result-1] != nums[result])
        {
         vector<int> vec = {result,result};
         return vec;
        }
        
     }  
     if(result == -1)
     {
         vector<int> vec = {-1,-1};
         return vec;
     }
                                                            
     int f = firstoccurrence(nums, target);
     int l = lastoccurrence(nums, target); 
        
     //std::cout<<l<<" "<<f<<std::endl;   
        
    vec = {f,l};
        
    return (vec);   
        
    }
    
    
    int firstoccurrence(vector<int>& nums, int target)
    {
        int first = binarysearch(nums, target,0,nums.size()-1);
        
        
        if(first-1 >= 0 && (nums[first] != nums[first-1]))
        {
            return first;
        }
        
        if(first - 1 >= 0)
        {
            while(first-1 >= 0 && first != -1 && nums[first-1] == nums[first])
            {
            std::cout << "Value of first is :  "<< first<<std::endl;
            std::cout<<"Getting old in FO"<<std::endl;
            first = binarysearch(nums, target, 0 ,first-1); 
            }
        }
        
        std::cout << "Final Value of first is :  "<< first<<std::endl;
        return first;
        
    }
    
     
    int lastoccurrence(vector<int>& nums, int target)
    {
        
        int last = binarysearch(nums, target,0,nums.size()-1);
        if(last+1 <= nums.size()-1)
        {
            if(nums[last] != nums[last+1])
            {
                return last;
            }
        }
        if(last+1 <= nums.size()-1)
        {
            while(last+1 <= nums.size()-1 && last !=-1 && nums[last+1] == nums[last])
            {
                if(last+1 > nums.size()-1)
                {
                return last;
                }
                std::cout<<"Getting old in LO"<<std::endl;    
                last = binarysearch(nums, target, last+1 ,nums.size()-1); 

            }
            
        }
        std::cout << "Final Value of last is :  "<< last<<std::endl;
        return last;
        
    }
    
    
    int binarysearch(vector<int>& nums, int target, int left, int right)
    {
        //left = 0;
        //right = nums.size()-1;
        int mid = left + (right-left)/2;
        
        while(left <= right)
        {
            if(nums[mid] == target)
            {
                return mid;
            }
            else if(target > nums[mid])
            {
                left = mid+1;
                mid = left + (right - left)/2;
            }
            else
            {
                right = mid - 1;
                mid = left + (right - left)/2;
            }
            
        }
        
        return -1;   
    }  
};
