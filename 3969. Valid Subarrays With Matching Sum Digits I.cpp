class Solution {
public:
    int firstDigit(long long num) {
        while (num >= 10) {
            num /= 10;
        }
        return num;
    }

    int countValidSubarrays(vector<int>& nums, int x) {
        vector<long long> ans;
        int cnt = 0;

        for (int i = 0; i < nums.size(); i++) {
            long long sum = 0;
            for (int j = i; j < nums.size(); j++) {
                sum += nums[j];
                ans.push_back(sum);
            }
        }

        for (int i = 0; i < ans.size(); i++) {
            int first = firstDigit(ans[i]);
            int last = ans[i] % 10;

            if (first == x && last == x) {
                cnt++;
            }
        }

        return cnt;
    }
};