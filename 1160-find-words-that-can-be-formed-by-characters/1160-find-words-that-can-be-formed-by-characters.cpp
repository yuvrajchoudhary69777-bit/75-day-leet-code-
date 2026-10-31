class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {

        int count[26] = {0};

        for (char c : chars) {
            count[c - 'a']++;
        }

        int ans = 0;

        for (string word : words) {

            int temp[26] = {0};

            for (char c : word) {
                temp[c - 'a']++;
            }

            bool valid = true;

            for (int i = 0; i < 26; i++) {

                if (temp[i] > count[i]) {
                    valid = false;
                    break;
                }
            }

            if (valid) {
                ans += word.length();
            }
        }

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna