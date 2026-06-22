class Solution {
private:
    bool linearSearch(vector<int>& nums, int x) {
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] == x) {
                return true;
            }
        }
        return false;
    }

public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;

        int largest = 1;

        for(int i = 0; i < nums.size(); i++) {
            int x = nums[i];
            int cnt = 1;

            while(linearSearch(nums, x + 1)) {
                x = x + 1;
                cnt++;
            }

            largest = max(largest, cnt);
        }

        return largest;
    }
};



class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;

        sort(nums.begin(), nums.end());

        int longest = 1;
        int cnt = 1;
        int last_smaller = nums[0];

        for(int i = 1; i < nums.size(); i++) {
            // if(nums[i]-1  == last_smaller)
             if(nums[i] == last_smaller+1)
             {
                cnt++;
                last_smaller = nums[i];
            }
            else if(nums[i] == last_smaller) {
                continue; 
            }
            else {
                cnt = 1;
                last_smaller = nums[i];
            }

            longest = max(longest, cnt);
        }

        return longest;
    }
};

//using unordered set
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st(nums.begin(), nums.end());

        int longest = 0;

        for (int num : st) {
            // Check if num is the start of a sequence
            if (st.find(num - 1) == st.end()) {
                int currentNum = num;
                int cnt = 1;

                while (st.find(currentNum + 1) != st.end()) {
                    currentNum++;
                    cnt++;
                }

                longest = max(longest, cnt);
            }
        }

        return longest;
    }
};