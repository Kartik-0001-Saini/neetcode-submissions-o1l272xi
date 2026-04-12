class Solution {
public:
    set<vector<int>> st;
    void backtrack(vector<int>& nums, int idx, vector<vector<int>>& res){
        if(idx == nums.size()){
            if(st.find(nums) == st.end()){
                res.push_back(nums);
                st.insert(nums);
            }
            return;
        }

        for(int i=0; i<nums.size(); i++){
            swap(nums[i], nums[idx]);
            backtrack(nums, idx+1, res);
            swap(nums[i], nums[idx]);
        }
    }

    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<int> allPermutation;
        vector<vector<int>> res;

        backtrack(nums, 0, res);

        return res;        
    }
};