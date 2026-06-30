class Solution {
private:
    void printpowerSet(vector<int>& nums, int index,
                       vector<int>& ans,
                       vector<vector<int>>& result) {

        // Base case
        if (index == nums.size()) {
            result.push_back(ans);
            return;
        }

        // Include current element
        ans.push_back(nums[index]);
        printpowerSet(nums, index + 1, ans, result);

        // Exclude current element
        ans.pop_back();
        printpowerSet(nums, index + 1, ans, result);
    }

public:
    vector<vector<int>> powerSet(vector<int>& nums) {

        vector<vector<int>> result;
        vector<int> ans;

        printpowerSet(nums, 0, ans, result);

        return result;
    }
};