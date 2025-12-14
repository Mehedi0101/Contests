class Solution {
public:
    int absDifference(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());

        int mx = 0, mn = 0, n = nums.size();

        for(int i=0; i<k; i++){
            mn += nums[i];
        }

        for(int i = n-k; i<n; i++){
            mx += nums[i];
        }

        return mx-mn;
    }
};