class Solution {
public:

    void backtrack(int n, int k, int num, vector<int>& allCombine, vector<vector<int>>& res){
        if(k == allCombine.size()){
            res.push_back(allCombine);
            return;
        }

        if(num > n){
            return;
        }
        
        for(int i = num; i<= n; i++){
            allCombine.push_back(i);
            backtrack(n, k, i+1, allCombine, res);
            allCombine.pop_back();
        }
    }

    vector<vector<int>> combine(int n, int k) {
        vector<int> allCombine;
        vector<vector<int>> res;

        backtrack(n, k , 1, allCombine, res);

        return res;
    }
};