class Solution {
private:
    int countSubsequence(vector<int>& nums, int k, int index, int sum) {

        // Base case
        if (index == nums.size()) {
            if (sum == k)
                return 1;
            return 0;
        }

        // Take the current element
        int take = countSubsequence(nums, k, index + 1, sum + nums[index]);

        // Don't take the current element
        int notTake = countSubsequence(nums, k, index + 1, sum);

        return take + notTake;
    }

public:
    int countSubsequenceWithTargetSum(vector<int>& nums, int k) {
        return countSubsequence(nums, k, 0, 0);
    }
};