class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxi = INT_MIN;
        int sum = 0;

        for(int i = 0; i < nums.size(); i++) {
            sum += nums[i];

            if(sum > maxi) {
                maxi = sum;
            }

            if(sum < 0) {
                sum = 0;
            }
        }

        return maxi;
    }
};



class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0;
        int maxSum = INT_MIN;

        int start = 0;
        int ansStart = 0;
        int ansEnd = 0;

        for(int i = 0; i < nums.size(); i++) {

            if(sum == 0) {
                start = i;
            }

            sum += nums[i];

            if(sum > maxSum) {
                maxSum = sum;
                ansStart = start;
                ansEnd = i;
            }

            if(sum < 0) {
                sum = 0;
            }
        }

        cout << "Maximum Subarray: ";
        for(int i = ansStart; i <= ansEnd; i++) {
            cout << nums[i] << " ";
        }
        cout << endl;

        return maxSum;
    }
};