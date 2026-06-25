class Solution {
public:
    int countMajoritySubarrays(vector<int>& nums, int target) {
        int cnt = 0;
        for (int i = 0; i < nums.size(); i++) {
            int sum = 0;
            for (int j = i; j < nums.size(); j++) {
                if(nums[j]==target) 
                sum+=1;
                else sum-=1;
                if(sum>0) cnt++;
            }
        }
        return cnt;
    }
};