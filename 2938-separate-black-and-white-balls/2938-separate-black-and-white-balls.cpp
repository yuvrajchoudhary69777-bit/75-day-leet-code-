
class Solution {
public:
    long long minimumSteps(string s) {
        long long count = 0;
        long long ans = 0;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '1') {
                count++;
            }
            else {
                ans += count;
            }
        }

        return ans;
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna