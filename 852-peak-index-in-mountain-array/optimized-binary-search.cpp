//https://leetcode.com/problems/peak-index-in-a-mountain-array/

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& A) {
        
    int l = 0 ;
    int r = A.size()-1;
    int mid = l + (r-l)/2;   
        
        while(l < r)
        {
            mid = l + (r-l)/2;
            if(A[mid-1] < A[mid] && A[mid] > A[mid+1])
            {
                return mid;
            }
            
            else if(A[mid-1] < A[mid])
            {
                l = mid;
            }
            
            else if (A[mid] > A[mid+1] )
            {
                r = mid;
            }
            
            
        }
        
        return 0;
    }
};
