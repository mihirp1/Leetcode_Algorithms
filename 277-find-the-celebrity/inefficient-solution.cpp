/* The knows API is defined for you.
      bool knows(int a, int b); */

class Solution {
public:
    int findCelebrity(int n) {
        vector<vector<int> > adj( n , vector<int> (n));
        vector<int> res;
        //Fill; up 
        int sum = 0;
         for(int i = 0 ; i < n  ; ++i) {
            sum = 0;
            for(int j = 0 ; j < n ; ++j) {
                if(knows(i, j)) {
                    adj[i][j] = 1;
                }
                else  {
                    adj[i][j] = 0;
                }    
                //std::cout <<i << j << adj[i][j]<<std::endl; 
                sum += adj[i][j];
                if(sum == 1 && j == n - 1) {
                    res.push_back(i);
                    //return i;
            }
         }    
         }
        /*
         for(int i = 0 ; i < res.size() ; ++i) {
                 std::cout << res[i]<< " ";
             }
        */             
             
        sum = 0;
        for(int i = 0 ; i < res.size()  ; ++i) {
            sum = 0;
            for(int j = 0 ; j < n ; ++j) {
                sum += adj[j][res[i]];
                    
                    //std::cout <<i << j << adj[i][j]<<sum<<std::endl;
                    if(sum == n && j == n-1)
                   return res[i]; 
                }
                
        }
        return -1;
        }
        
    
};
