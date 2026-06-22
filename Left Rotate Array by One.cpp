class Solution {
public:
    vector<int> rotateArrayByOne(vector<int>& nums) {
        int n = nums[0];

        vector<int> ans;

        for (int i = 1; i < nums.size(); i++) {
            ans.push_back(nums[i]);
        }

        ans.push_back(n);

        return ans;
    }
};
