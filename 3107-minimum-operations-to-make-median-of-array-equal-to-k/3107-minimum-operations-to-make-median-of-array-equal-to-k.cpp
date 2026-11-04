
class Solution {
public:
    long long minOperationsToMakeMedianK(vector<int>& nums, int k) {
        
        sort(nums.begin(), nums.end());

        int n = nums.size();
        int mid = n / 2;

        long long ans = 0;

        for (int i = 0; i < n; i++) {
            if (i == mid) {
                ans += abs((long long)nums[i] - k);
            }
            else if (i < mid && nums[i] > k) {
                ans += nums[i] - k;
            }
            else if (i > mid && nums[i] < k) {
                ans += k - nums[i];
            }
        }

        return ans;
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna