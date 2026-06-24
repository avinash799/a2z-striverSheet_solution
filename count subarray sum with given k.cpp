class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int cnt = 0;

        // Prefix Sum
        vector<int> prefixSum(n, 0);

        prefixSum[0] = nums[0];
        for (int i = 1; i < n; i++) {
            prefixSum[i] = prefixSum[i - 1] + nums[i];
        }

        unordered_map<int, int> m;

        for (int j = 0; j < n; j++) {

            // Subarray from 0 to j
            if (prefixSum[j] == k) {
                cnt++;
            }

            int val = prefixSum[j] - k;

            if (m.find(val) != m.end()) {
                cnt += m[val];
            }

            m[prefixSum[j]]++;
        }

        return cnt;
    }
};