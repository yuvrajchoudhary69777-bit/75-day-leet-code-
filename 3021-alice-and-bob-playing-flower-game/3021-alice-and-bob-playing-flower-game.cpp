class Solution {
public:
    long long flowerGame(int n, int m) {
        long long oddN = (n + 1) / 2;
        long long evenN = n / 2;

        long long oddM = (m + 1) / 2;
        long long evenM = m / 2;

        return oddN * evenM + evenN * oddM;
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna