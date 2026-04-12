class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int target) {
        int row = mat.size(), col = mat[0].size();
        int st = 0, end = row-1;
        int foundRow = -1;
        while(st <= end){
            int mid = st + (end-st)/2;
            if(mat[mid][0] <= target && mat[mid][col-1] >= target){
                foundRow = mid;
                break;
            }
            else if(mat[mid][0] > target){
                end = mid - 1;
            }
            else{
                st = mid + 1;
            }
        }

        if(foundRow == -1) return false;

        int st_col = 0, end_col = col - 1;
        while(st_col <= end_col){
            int mid = st_col + (end_col - st_col)/2;
            if(mat[foundRow][mid] == target){
                return true;
            }
            else if(mat[foundRow][mid] < target){
                st_col = mid+1;
            }
            else{
                end_col = mid-1;
            }
        }

        return false;
    }
};
