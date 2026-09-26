class Solution {
public:
    int climbStairs(int n) {
        int a = 1; 
        int b = 1; 

        for (int i=2; i<=n; i++) {
            int curr = a+b; 
            b = a ; 
            a = curr; 

        }

 return a;
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna