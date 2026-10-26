class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.size(); 
        int m = needle.size(); 


        for (int i = 0; i<= n-m; i++){
            if(haystack.substr(i, m) == needle){
                return i; 
            }
        }
         return -1; 
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna