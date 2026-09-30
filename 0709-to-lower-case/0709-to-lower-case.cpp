class Solution {
public:
    string toLowerCase(string s) {
         for (char &c : s){
            if (c>= 'A' && c <='Z'){
                c = c + ('a'-'A');
            }
         }
         return s; 

    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna