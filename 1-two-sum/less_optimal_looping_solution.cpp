class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
         set<int> st;
         vector<int> vc;

        for (int i = 0; i < nums.size(); ++i) {

            for (int j = 0 ; j < nums.size() ; j++) {
                int diff = target - nums[i];
                if ((i != j) && (nums[j] == diff)) {

                   if (st.count(i) == 0)
                   {
                        st.insert(i);
                        if (st.count(j) == 0)
                        {
                            st.insert(j);
                            vector<int> vc(st.begin(), st.end());
                            return vc;
                        }
                   }
                }





                }
            }
                return vc;
        }



};
