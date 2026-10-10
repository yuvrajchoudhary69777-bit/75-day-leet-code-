class Solution {
public:
    int minRotations(string s) {
        int ans = 0 ; 
        int curr = 0 ; 

        for (char c: s){
            int next = c - '0'; 
            int diff = abs (next - curr); 

             ans+= min(diff, 10 - diff); 
            curr = next; 
            
        }
         return ans; 
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna