//https://leetcode.com/problems/guess-number-higher-or-lower/

// Forward declaration of guess API.
// @param num, your guess
// @return -1 if my number is lower, 1 if my number is higher, otherwise return 0
int guess(int num);

class Solution {
public:
    int guessNumber(int n) {
        
        int l = 1;
        int r = n;
        int mid;
        
        if(n==1) return 1;
        
        while(l<=r)
        {
            mid = l + (r-l)/2;
            int res = guess(mid);
            if(res == 0)
            {
                return mid;
            }
            
            
            else if(res == -1)
            {
                r = mid-1;
            }
            else if(res == 1)
            {
                l = mid+1;
            }

            
            
        }
        
        
        return mid;
    }
};
