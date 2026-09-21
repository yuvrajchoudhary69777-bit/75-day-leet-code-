class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int ans = INT_MIN;
        int curr_sum = 0;

        for (int i=0; i<n; i++){
            curr_sum+=nums[i];
            if(curr_sum>ans)ans = curr_sum;
            if(curr_sum<0) curr_sum=0;

        }
         return ans;
            }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna