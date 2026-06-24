class Solution {
public:
    int subarraysWithXorK(vector<int> &nums, int k) {
        int n = nums.size();
        int cnt = 0;

        for (int i = 0; i < n; i++) {
            int xr = 0;

            for (int j = i; j < n; j++) {
                xr ^= nums[j];

                if (xr == k) {
                    cnt++;
                }
            }
        }

        return cnt;
    }
};


//optimal answer
class Solution {
public:
    int subarraysWithXorK(vector<int>& nums, int k) {
        unordered_map<int, int> mp;

        int xr = 0;
        int cnt = 0;

        mp[0] = 1;  // empty prefix

        for (int num : nums) {
            xr ^= num;

            int required = xr ^ k;

            if (mp.find(required) != mp.end()) {
                cnt += mp[required];
            }

            mp[xr]++;
        }

        return cnt;
    }
};