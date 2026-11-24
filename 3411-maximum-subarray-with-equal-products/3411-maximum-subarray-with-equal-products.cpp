
class Solution {
public:
    int maxLength(vector<int>& nums) {
        int n = nums.size();
        int ans = 1;

        for (int i = 0; i < n; i++) {
            long long g = 0, l = 1;
            __int128 prod = 1;

            for (int j = i; j < n; j++) {
                g = gcd(g, (long long)nums[j]);

                long long x = nums[j];
                long long d = gcd(l, x);

                // Check LCM overflow
                if (l / d > LLONG_MAX / x)
                    break;

                l = (l / d) * x;

                // Check product overflow
                if (prod > (__int128)g * l / x && x != 0)
                    break;

                prod *= x;

                if (prod == (__int128)g * l) {
                    ans = max(ans, j - i + 1);
                }
            }
        }

        return ans;
    }
};



// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna