#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int secondLargestElement(vector<int>& nums) {
        int n = nums.size();

        sort(nums.begin(), nums.end());

        int largest = nums[n - 1];
        int secondLargest = -1;

        for (int i = n - 2; i >= 0; i--) {
            if (nums[i] != largest) {
                secondLargest = nums[i];
                break;
            }
        }

        return secondLargest;
    }
};

int main() {
    int n;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    Solution obj;
    cout << obj.secondLargestElement(a);

    return 0;
}
