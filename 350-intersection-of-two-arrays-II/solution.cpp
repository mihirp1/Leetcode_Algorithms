class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        
        std::sort(nums1.begin(),nums1.end());
        std::sort(nums2.begin(),nums2.end());
        std::vector<int> vec;

        int s = 0;
        int l = 0;
        
        while( s < nums1.size() &&  l < nums2.size())
        {
            
            if(nums1[s] == nums2[l])
            {
                vec.push_back(nums1[s]);
                ++s;
                ++l;
            }
            else if(nums1[s] < nums2[l])
            {
                ++s;                
            }
            else if(nums1[s] > nums2[l])
            {
                ++l;
            }
            
        }       
      return vec;  
    }
};
