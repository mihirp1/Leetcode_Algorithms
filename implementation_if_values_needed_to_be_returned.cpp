class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
         unordered_map<int,int> um;
         vector<int> vc;

        for (int i = 0; i < nums.size(); ++i) {

                int diff = target - nums[i];
                if (um.count(diff) > 0) {

                            vc.push_back(diff);
                            vc.push_back(nums[i]);
                            return vc;

                } else {

                    um[diff] = nums[i];
                    um[nums[i]] = diff;
                }

                }
                return vc;
            }




};
