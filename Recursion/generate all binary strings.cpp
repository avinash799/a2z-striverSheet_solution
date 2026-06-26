class Solution {
public:
    
    void solve(int pos, int n, string curr, vector<string> &ans) {

        // Base case
        if (pos == n) {
            ans.push_back(curr);
            return;
        }
        solve(pos + 1, n, curr + '0', ans);
        if (curr.empty() || curr.back() != '1') {
            solve(pos + 1, n, curr + '1', ans);
        }
    }

    vector<string> generateBinaryStrings(int n) {
        vector<string> ans;
        solve(0, n, "", ans);
        return ans;
    }
};