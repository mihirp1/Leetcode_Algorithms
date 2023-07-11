class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        vector <vector<int>> v;
        vector <int> v_inner;
        unordered_set<string> us;
        for (int i = 0 ; i < nums.size() ; i++) {

            for (int j = 0; j < nums.size() ; j++){

                for (int k = 0 ; k < nums.size(); k++) {
                    if (nums[i] + nums[j] + nums[k] == 0 && (i != j && j != k && i != k)) {
                        v_inner.push_back(nums[i]);
                        v_inner.push_back(nums[j]);
                        v_inner.push_back(nums[k]);
                        sort(v_inner.begin(),v_inner.end());


                        if (!us.count(to_string(v_inner[0])+
                            to_string(v_inner[1])+
                            to_string(v_inner[2]))) {
                            us.insert(to_string(v_inner[0])+
                            to_string(v_inner[1])+
                            to_string(v_inner[2]));
                            v.push_back(v_inner);
                        }
                        v_inner.clear();

                    }

                }
            }
        }
        return v;
    }
};
