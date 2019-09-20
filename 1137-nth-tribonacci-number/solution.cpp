//https://leetcode.com/problems/n-th-tribonacci-number/
class Solution {
public:
    int tribonacci(int n) { 
        
        unordered_map<int,int> hash;
        return(recurse(n , hash));
        
        
    }
    
    int recurse(int n , unordered_map<int,int>& hash)
        
    {
        int a = 0;
        int b = 0;
        int c = 0;
        
        if(n == 0)
        {
            if(hash.count(0) == 0)
            {
                hash[0] = 0;
                return hash[0];
                
            }
            else
                return 0;
            
        }
        
        if(n == 1)
        {
            if(hash.count(1) == 0)
            {
                hash[1] = 1;
                return hash[1];
                
            }
            else
                return hash[1];
        }
        if(n == 2)
        {
            
            if(hash.count(2) == 0)
            {
                hash[2] = 1;
                return hash[2];
                
            }
            else
                return hash[2];
        }
        if(hash.count(n-1) > 0)
            a = hash[n-1];
        else
        {
            a = recurse(n-1,hash);
            hash[n-1] = a;
        }
        if(hash.count(n-2) > 0)
            b = hash[n-2];
        else
        {
            b = recurse(n-2,hash);
            hash[n-2] = b;
        }
        if(hash.count(n-3) > 0)
            c = hash[n-3];
        else
        {
            c = recurse(n-3,hash);
            hash[n-3] = c;
        }
        
        
        return a + b + c;
        
        
        
    }
};
