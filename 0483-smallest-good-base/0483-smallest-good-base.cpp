
class Solution {
public:
    int check(long long k, int len, long long n) {
        long long sum = 1;
        long long term = 1;

        for(int i = 1; i < len; i++) {
            if(term > (n - sum) / k) {
                return 1;
            }

            term *= k;
            sum += term;
        }

        if(sum == n) return 0;
        if(sum < n) return -1;

        return 1;
    }

    string smallestGoodBase(string n) {
        long long num = stoll(n);

        for(int len = 60; len >= 2; len--) {
            long long low = 2;
            long long high = num - 1;

            while(low <= high) {
                long long mid = low + (high - low) / 2;

                int result = check(mid, len, num);

                if(result == 0) {
                    return to_string(mid);
                }
                else if(result == -1) {
                    low = mid + 1;
                }
                else {
                    high = mid - 1;
                }
            }
        }

        return to_string(num - 1);
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna