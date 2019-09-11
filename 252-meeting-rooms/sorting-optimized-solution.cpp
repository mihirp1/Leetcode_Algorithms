//https://leetcode.com/problems/meeting-rooms/

class Solution {
public:
    bool canAttendMeetings(vector<vector<int>>& vec) {
        
        if(vec.size()== 0)
        {
            return true;
        }
        
        
        std::sort(vec.begin(),vec.end());   

        
        for(int i = 0 ; i < vec.size()-1; ++i)
        {
            if(vec[i][1] <= vec[i+1][0])
            {
                continue;
            }
            else
            {
                return false;
            }
        }
        
        
        
        return true;
    }
};
