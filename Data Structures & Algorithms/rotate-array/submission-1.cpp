class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;
        vector<int> res(n);
        int j = 0;
        for(int i=n-k; i<n; i++){
            res[j++] = nums[i];
        }

        for(int i=0; i<n-k; i++){
            res[j++] = nums[i];
        }

        for(int i=0; i<n; i++){
            nums[i] = res[i];
        }
    }
};