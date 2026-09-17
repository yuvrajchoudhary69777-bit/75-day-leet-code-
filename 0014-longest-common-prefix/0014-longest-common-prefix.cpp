class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix = strs[0];

        for (int i = 0; i<strs.size(); i++){
            int j = 0; 
            while (j < prefix.size () &&
             j < strs[i].size() &&
            prefix[j]== strs[i][j])  {
                j++;
            }
            prefix = prefix.substr(0, j); 
             
             if (prefix.empty())
             return "";
            
        }
            return prefix;    
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna