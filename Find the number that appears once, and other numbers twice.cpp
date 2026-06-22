class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int,int> mp;

        for (int i = 0; i < nums.size(); i++) {
            //count frequency of all the elements
            mp[nums[i]]++;
        }
        //iterate over all element and check which element occur once 
        for (auto it : mp) {
            if (it.second == 1) {
                return it.first;
            }
        }

        return -1;
    }
};
