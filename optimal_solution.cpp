class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
         unordered_map<int,int> um;
         //vector<int> vc;

        for (int i = 0; i < nums.size(); ++i) {

                int diff = target - nums[i];
                if (um.count(diff)) {

                            return {um[diff],i};

                }
                um[nums[i]] = i;

                }
                return {};
            }

};
