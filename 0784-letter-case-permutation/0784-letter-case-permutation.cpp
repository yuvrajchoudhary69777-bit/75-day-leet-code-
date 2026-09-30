class Solution {
public:
    vector<string> ans;

    void solve(string &s, int i) {
        if (i == s.size()) {
            ans.push_back(s);
            return;
        }

        if (isalpha(s[i])) {
            // lowercase
            s[i] = tolower(s[i]);
            solve(s, i + 1);

            // uppercase
            s[i] = toupper(s[i]);
            solve(s, i + 1);
        } 
        else {
            // digit
            solve(s, i + 1);
        }
    }

    vector<string> letterCasePermutation(string s) {
        solve(s, 0);
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna