class Solution
{
public:
    vector<int> leaders(vector<int> &nums)
    {
        vector<int> ans;

        for (int i = 0; i < nums.size(); i++)
        {
            bool leader = true;
            for (int j = i + 1; j < nums.size(); j++)
            {
                if (nums[j] > nums[i])
                    leader = false;
                break;
            }
            if (leader)
            {
                ans.push_back(nums[i]);
            }
        }

        return ans;
    }
};
