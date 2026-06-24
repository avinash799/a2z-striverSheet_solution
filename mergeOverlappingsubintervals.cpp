class Solution {
public:
    vector<vector<int>> mergeOverlap(vector<vector<int>>& arr) {

        int n = arr.size();
        vector<vector<int>> ans;

        sort(arr.begin(), arr.end());

        for (int i = 0; i < n; i++) {

            int start = arr[i][0];
            int end = arr[i][1];

            // Agar current interval already merged interval ke andar hai
            if (!ans.empty() && end <= ans.back()[1]) {
                continue;
            }

            for (int j = i + 1; j < n; j++) {

                if (arr[j][0] <= end) {
                    end = max(end, arr[j][1]);
                }
                else {
                    break;
                }
            }

            ans.push_back({start, end});
        }

        return ans;
    }
};