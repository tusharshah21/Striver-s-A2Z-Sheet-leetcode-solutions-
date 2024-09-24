
// Link: https://leetcode.com/problems/two-sum/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> mpp;
        for (int i = 0; i < nums.size(); i++) {
            int diff = target - nums[i];
            if (mpp.find(diff) != mpp.end()) {
                return {i, mpp[diff]};
            }
            mpp[nums[i]] = i;
        }
        return {};
    }
};