// Forward declaration of isBadVersion API.
bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int left = 1;
        int right = n;
        
        int mid = left + (right-left)/2;

        
        while(left < right)
        {
            mid = left + (right-left)/2;
            if(!isBadVersion(mid))
            {

                left = mid+1;

                
            }
            
            else
            {
                right = mid;

                
            }
     
        }  
        return left;
        }
};
    

