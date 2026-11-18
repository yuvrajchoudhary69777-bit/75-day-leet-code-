
class Solution {
public:
    int minChanges(string s) {
        int count = 0;

        for (int i = 0; i < s.length(); i += 2) {
            if (s[i] != s[i + 1]) {
                count++;
            }
        }

        return count;
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna