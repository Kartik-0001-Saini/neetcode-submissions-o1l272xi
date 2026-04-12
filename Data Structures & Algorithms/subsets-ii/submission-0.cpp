class Solution {
public:
    set<vector<int>> st;

    void backtrack(vector<int>& nums, int idx, vector<int>& combine, vector<vector<int>>& res){
        if(idx == nums.size()){
            if(st.find(combine) == st.end()){
                res.push_back(combine);
            }
            st.insert(combine);
            return;
        }

        combine.push_back(nums[idx]);
        backtrack(nums, idx+1, combine, res);
        combine.pop_back();

        while(idx + 1 < nums.size() && nums[idx] == nums[idx + 1]) {
            idx++;
        }
        
        backtrack(nums, idx+1, combine, res);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> combine;
        sort(nums.begin(), nums.end());
        backtrack(nums, 0, combine, res);

        return res;
    }
};
