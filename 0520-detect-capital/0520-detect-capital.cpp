class Solution {
public:
    bool detectCapitalUse(string word) {
        int upper = 0;

        for (char c : word) {
            if (c >= 'A' && c <= 'Z') {
                upper++;
            }
        }

        // All uppercase
        if (upper == word.length())
            return true;

        // All lowercase
        if (upper == 0)
            return true;

        // Only first letter uppercase
        if (upper == 1 && word[0] >= 'A' && word[0] <= 'Z')
            return true;

        return false;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna