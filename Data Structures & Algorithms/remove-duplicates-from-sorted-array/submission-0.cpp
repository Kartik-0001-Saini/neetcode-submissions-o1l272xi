class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        
        int idx = 1;
        int n = nums.size();
        for(int i=1; i<n; i++){
            if(nums[i] != nums[i-1]){
                nums[idx++] = nums[i];
            }
        }

        return idx;
    }
};