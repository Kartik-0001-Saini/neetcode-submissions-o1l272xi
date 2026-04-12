class Solution {
public:

    void backtrack(vector<int>& candidates, int target, int idx, vector<int>& combine, vector<vector<int>>& res){
        if(target == 0){
            res.push_back(combine);
            return;
        }

        for(int i=idx; i<candidates.size(); i++){
            
            if(i>idx && candidates[i] == candidates[i-1]) continue;

            if(candidates[i] > target) break;
            
            combine.push_back(candidates[i]);
            backtrack(candidates, target-candidates[i], i+1, combine, res);
            combine.pop_back();
        }        
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<int> combine;
        vector<vector<int>> res;

        backtrack(candidates, target, 0, combine, res);
        return res;
    }
};
