class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int inc = 1, dec = 1, ans = 1;

        for(int i = 1; i < nums.size(); i++) {
            inc = nums[i] > nums[i-1] ? inc + 1 : 1;
            dec = nums[i] < nums[i-1] ? dec + 1 : 1;
            ans = max(ans, max(inc, dec));
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna