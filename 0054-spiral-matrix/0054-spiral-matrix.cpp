class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {

        int n = matrix.size();
        int m = matrix[0].size();

        int total = n * m;
        int count = 0;

        vector<int> ans;

        int rowStart = 0;
        int rowEnd = n - 1;
        int colStart = 0;
        int colEnd = m - 1;

        while (count < total) {

            // Left -> Right
            for (int i = colStart; i <= colEnd; i++) {
                ans.push_back(matrix[rowStart][i]);
                count++;
            }
            rowStart++;

            if (count == total) break;

            // Top -> Bottom
            for (int i = rowStart; i <= rowEnd; i++) {
                ans.push_back(matrix[i][colEnd]);
                count++;
            }
            colEnd--;

            if (count == total) break;

            // Right -> Left
            for (int i = colEnd; i >= colStart; i--) {
                ans.push_back(matrix[rowEnd][i]);
                count++;
            }
            rowEnd--;

            if (count == total) break;

            // Bottom -> Top
            for (int i = rowEnd; i >= rowStart; i--) {
                ans.push_back(matrix[i][colStart]);
                count++;
            }
            colStart++;
        }

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna