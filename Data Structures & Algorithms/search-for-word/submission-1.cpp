class Solution {
public:
    bool backtrack(vector<vector<char>>& mat, string word, int col, int row,
                   int idx) {
        int n = mat[0].size();
        int m = mat.size();

        if (idx == word.size()) {
            return true;
        }

        if (row < 0 || col < 0 || row >= m || col >= n ||
            mat[row][col] != word[idx]) {
            return false;
        }

        char temp = mat[row][col];
        mat[row][col] = '#';

        bool found = backtrack(mat, word, col + 1, row, idx + 1) ||
                     backtrack(mat, word, col - 1, row, idx + 1) ||
                     backtrack(mat, word, col, row + 1, idx + 1) ||
                     backtrack(mat, word, col, row - 1, idx + 1);

        mat[row][col] = temp;

        return found;
    }

    bool exist(vector<vector<char>>& mat, string word) {
        int row = mat.size();
        int col = mat[0].size();
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                if (backtrack(mat, word, j, i, 0)) {
                    return true;
                }
            }
        }
        return false;
    }
};