class Solution {
public:
    int numberOfSubstrings(string s) {
        int n = s.size();
        int ans = 0;

        for (int i = 0; i < n; i++) {

            bool a = false, b = false, c = false;

            for (int j = i; j < n; j++) {

                if (s[j] == 'a') a = true;
                else if (s[j] == 'b') b = true;
                else c = true;

                if (a && b && c) {
                    ans += (n - j);
                    break;
                }
            }
        }

        return ans;
    }
};


class Solution {
public:
    int numberOfSubstrings(string s) {
        int n = s.size();
        int cnt = 0;

        for (int i = 0; i < n; i++) {
            bool a = false, b = false, c = false;

            for (int j = i; j < n; j++) {
                if (s[j] == 'a') a = true;
                else if (s[j] == 'b') b = true;
                else c = true;

                if (a && b && c)
                    cnt++;
            }
        }

        return cnt;
    }
};

//optimal solution
class Solution {
public:
    int numberOfSubstrings(string s) {
        int n = s.size();
        int ans = 0;

        // lastSeen[0] -> last index of 'a'
        // lastSeen[1] -> last index of 'b'
        // lastSeen[2] -> last index of 'c'
        vector<int> lastSeen(3, -1);

        for (int i = 0; i < n; i++) {
            lastSeen[s[i] - 'a'] = i;

            // If all three characters have been seen
            if (lastSeen[0] != -1 &&
                lastSeen[1] != -1 &&
                lastSeen[2] != -1) {

                ans += min({lastSeen[0], lastSeen[1], lastSeen[2]}) + 1;
            }
        }

        return ans;
    }
};