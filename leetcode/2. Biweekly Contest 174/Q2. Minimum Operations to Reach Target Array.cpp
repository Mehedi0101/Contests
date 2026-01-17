class Solution
{
public:
    int minOperations(vector<int> &nums, vector<int> &target)
    {
        set<int> ans;

        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] != target[i])
                ans.insert(nums[i]);
        }

        return ans.size();
    }
};