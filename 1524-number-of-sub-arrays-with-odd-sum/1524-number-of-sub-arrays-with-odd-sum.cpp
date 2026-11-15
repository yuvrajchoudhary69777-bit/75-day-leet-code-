class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        long long odd = 0;
        long long even = 1;
        long long sum = 0; 
        long long ans = 0;

        int MOD = 1e9 + 7;

        for(int x : arr){
            sum += x;

            if (sum % 2 == 0){
                ans  += odd; 
                even++; 

            }
            else {
                ans += even; 
                odd++; 

            }

            ans %= MOD;

        }
        
        return ans; 
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna