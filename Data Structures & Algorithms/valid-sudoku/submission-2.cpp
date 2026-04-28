class Solution {
public:

    bool backtrack(vector<vector<char>>& mat, int row, int col, char str){
        for(int i=0; i<9; i++){
            if(mat[i][col] == str && i != row){
                return true;
            }
        }

        for(int i=0; i<9; i++){
            if(mat[row][i] == str && i != col){
                return true;
            }
        }

        int st_row = (row/3)*3, st_col = (col/3)*3;
        for(int i=st_row; i<st_row+3; i++){
            for(int j=st_col; j<st_col+3; j++){
                if(mat[i][j] == str && (i != row || j != col )){
                    return true;
                }
            }
        }

        return false;
    }

    bool isValidSudoku(vector<vector<char>>& mat) {
        int row = mat.size(), col = mat[0].size();
        for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
                if(mat[i][j] == '.') continue;

                if(backtrack(mat, i, j, mat[i][j])){
                    return false;
                }
            }
        }

        return true;
    }
};