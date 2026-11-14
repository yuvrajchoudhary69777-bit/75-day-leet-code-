
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {

        int left = 0;
        int sum = 0;
        int ans = INT_MAX;

        for (int right = 0; right < nums.size(); right++) {

            sum += nums[right];

            while (sum >= target) {

                int len = right - left + 1;

                ans = min(ans, len);

                sum -= nums[left];

                left++;
            }
        }

        return ans == INT_MAX ? 0 : ans;
    }
};



// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna