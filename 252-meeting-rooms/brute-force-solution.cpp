class Solution {
public:
    bool canAttendMeetings(vector<vector<int>>& vec) {
        
        
        for(int i = 0 ; i < vec.size(); ++i)
        {
            for(int j = i+1 ; j < vec.size();++j)
            {
                if(((vec[i][0] <= vec[j][0]) && (vec[i][1]   <=  vec[j][0])) || (((vec[j][0] <= vec[i][0]) && (vec[j][1]   <=  vec[i][0]))))
                {
                    continue;
                }
                else
                {
                    return false;
                }
            }
        }
        return true;
    }
};
