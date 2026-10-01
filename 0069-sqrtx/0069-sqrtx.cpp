class Solution {
public:
    int mySqrt(int n) {
        int l = 0;
        int r = n;
        int ans = 0;

        while (l <= r) {
            long long mid = l + (r - l) / 2;

            if (mid * mid > n) {
                r = mid - 1;
            } 
            else {
                ans = mid;
                l = mid + 1;
            }
        }

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna