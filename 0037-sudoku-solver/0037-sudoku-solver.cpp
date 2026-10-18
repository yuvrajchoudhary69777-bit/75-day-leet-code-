
class Solution {
public:
    void solveSudoku(vector<vector<char>>& board) {
        solve(board);
    }

    bool solve(vector<vector<char>>& board) {
        for (int r = 0; r < 9; r++) {
            for (int c = 0; c < 9; c++) {

                if (board[r][c] == '.') {

                    for (char ch = '1'; ch <= '9'; ch++) {

                        if (isValid(board, r, c, ch)) {
                            board[r][c] = ch;

                            if (solve(board)) {
                                return true;
                            }

                            board[r][c] = '.';
                        }
                    }

                    return false;
                }
            }
        }

        return true;
    }

    bool isValid(vector<vector<char>>& board,
                 int r, int c, char ch) {

        for (int i = 0; i < 9; i++) {
            if (board[r][i] == ch) return false;
            if (board[i][c] == ch) return false;
        }

        int boxRow = (r / 3) * 3;
        int boxCol = (c / 3) * 3;

        for (int i = boxRow; i < boxRow + 3; i++) {
            for (int j = boxCol; j < boxCol + 3; j++) {
                if (board[i][j] == ch) return false;
            }
        }

        return true;
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna