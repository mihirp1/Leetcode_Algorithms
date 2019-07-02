class Solution {
public:
    bool isMonotonic(vector<int>& A) {
        int count1 = 0;
        int count2 = 0;
        int count3 = 0;
        int l = A.size();
        int flag = 0;
        for(int i = 0;i<l-1;i++)
        {
        
            if(A[i+1] > A[i])
            {
                count1++;
                 if(flag == 2)
                {
                    return false;
                    
                }
                
                flag = 1;
            }
            if(A[i+1] < A[i])
            {
                count2++;
                if(flag == 1)
                {
                    return false;
                    
                }
                
                flag = 2;
            }
            
            if(A[i+1] == A[i])
            {                
                count3++;
                flag = 3;
            }
            
        }
       if(count1+count3 == l-1 | count2+count3==l-1)
            {
                return true;
            }
        
     return false;     
    }
};
