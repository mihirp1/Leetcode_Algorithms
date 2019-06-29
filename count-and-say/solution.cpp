//https://leetcode.com/problems/count-and-say/

class Solution {
public:
    string countAndSay(int n) {
        string ret = ""; 
        string str = "1"; 
        int j,k;
        int count;
        
        if(n == 1)
            {
                return str;
            }
        
        for(int i = 0;i<n-1;i++)
        {
            
            j = 0;
            while(j <str.length())
                
            {
                k = j;
                count = 0;
                while(str[k] == str[k+1])
                {
                    count++;
                    k++;
                    //repeat = 1;
                    
                }
                j =k;
                //if(count != 0)
                //{
                 ret += std::to_string(count+1) + str[k];   
                    
                //}
                //else
                    //ret += std::to_string(1) + str[k];
                
                j++;
            }
            std::cout <<ret<<std::endl;
         str = ret;     
         ret = "";
        }
    return str;    
    }
};
