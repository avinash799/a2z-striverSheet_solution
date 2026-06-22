class Solution {
public:
    bool isSorted(vector<int>& nums) {
        bool flag = true;
        int n = nums.size();

        for (int i = 1; i < n; i++) {
            if (nums[i] < nums[i - 1]) {
                flag = false;
                break;
            }
        }

        return flag;
    }
};
