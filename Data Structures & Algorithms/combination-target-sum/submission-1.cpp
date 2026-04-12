class Solution {
public:
    set<vector<int>> st;
    void backtrack(vector<int>& nums, int target, int idx, vector<int>& combine, vector<vector<int>>& res){
        if(target < 0 || idx == nums.size()){
            return;
        }
        if(target == 0){
            if(st.find(combine) == st.end()){
                res.push_back(combine);
                st.insert(combine);
            }
            return;
        }

        // If we want single element from the array
        combine.push_back(nums[idx]);
        backtrack(nums, target-nums[idx], idx+1, combine, res);

        backtrack(nums, target-nums[idx], idx, combine, res);

        combine.pop_back();
        backtrack(nums, target, idx+1, combine, res);
    }

    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<int> combine;
        vector<vector<int>> res;

        backtrack(nums, target, 0, combine, res);

        return res;
    }
};
