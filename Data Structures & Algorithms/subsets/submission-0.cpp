class Solution {
public:

    void backtrack(vector<int>& nums, int idx, vector<int>& allSubset, vector<vector<int>>& res){
        if(idx == nums.size()){
            res.push_back(allSubset);
            return;
        }

        allSubset.push_back(nums[idx]);
        backtrack(nums, idx+1, allSubset, res);

        allSubset.pop_back();
        backtrack(nums, idx+1, allSubset, res);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> allSubset;
        vector<vector<int>> res;

        backtrack(nums, 0, allSubset, res);

        return res;
    }
};
