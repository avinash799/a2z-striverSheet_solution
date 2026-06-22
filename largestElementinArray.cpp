#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int largestElement(vector<int>& nums) {
        int maxi = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] > maxi) {
                maxi = nums[i];
            }
        }

        return maxi;
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
    cout << obj.largestElement(a);

    return 0;
}