//Brute force solution

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> ans;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                ans.push_back(nums[i]);
            }
        }

        for (int i = 0; i < ans.size(); i++) {
            nums[i] = ans[i];
        }

        for (int i = ans.size(); i < nums.size(); i++) {
            nums[i] = 0;
        }
    }
};

//Dutch national algorithm

class Solution {
public:
    void sortColors(vector<int>& nums) {

        // low  -> next position where 0 should be placed
        // mid  -> current element being processed
        // high -> next position where 2 should be placed

        int low = 0;
        int mid = 0;
        int high = nums.size() - 1;

        // Process elements until mid crosses high
        while (mid <= high) {

            // Case 1: Current element is 0
            if (nums[mid] == 0) {

                // Place 0 in the left partition
                swap(nums[low], nums[mid]);

                // Expand both low and mid
                low++;
                mid++;
            }

            // Case 2: Current element is 1
            else if (nums[mid] == 1) {

                // 1 is already in the correct middle partition
                mid++;
            }

            // Case 3: Current element is 2
            else {

                // Place 2 in the right partition
                swap(nums[mid], nums[high]);

                // Shrink the right partition
                high--;

                // Do NOT increment mid here because
                // the swapped element from high
                // has not been processed yet
            }
        }
    }
};


