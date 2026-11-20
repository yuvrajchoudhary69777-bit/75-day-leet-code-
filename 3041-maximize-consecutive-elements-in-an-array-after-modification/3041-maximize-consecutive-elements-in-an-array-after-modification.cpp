class Solution {
public:
    int maxSelectedElements(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        unordered_map<int, int> dp;
        int ans = 0; 

        for (int x : nums){
            dp[x + 1] = dp[x] + 1; 
            dp[x] = dp[x -1] + 1;

            ans= max(ans, max(dp[x], dp[x + 1]));
        }
        return ans; 
        
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna