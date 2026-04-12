class Solution {
public:

    bool backtrack(vector<vector<char>>& mat, int row, int col, char tar){
        for(int i=0; i<9; i++){
            if(mat[i][col] == tar && i != row){
                return true;
            }
        }

        for(int i=0; i<9; i++){
            if(mat[row][i] == tar && i != col){
                return true;
            }
        }

        int st_row = (row/3)*3;
        int st_col = (col/3)*3;
        for(int i=st_row; i<=st_row+2; i++){
            for(int j=st_col; j<=st_col+2; j++){
                if(mat[i][j] == tar && i != row && j != col){
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
                if(mat[i][j] != '.'){
                    if(backtrack(mat, i, j, mat[i][j])){
                        return false;
                    }
                }
            }
        }

        return true;
    }
};