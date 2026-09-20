class Solution {
public:
    bool isAlphanumeric(char ch) {
        return (ch >= 'a' && ch <= 'z') ||
               (ch >= '0' && ch <= '9');
    }

    bool isPalindrome(string s) {
        int n = s.length();
        int l = 0;
        int r = n - 1;

        while (l < r) {
            char cl = tolower(s[l]);
            char cr = tolower(s[r]);

            if (!isAlphanumeric(cl)) {
                l++;
            }
            else if (!isAlphanumeric(cr)) {
                r--;
            }
            else {
                if (cl != cr)
                    return false;

                l++;
                r--;
            }
        }

        return true;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna