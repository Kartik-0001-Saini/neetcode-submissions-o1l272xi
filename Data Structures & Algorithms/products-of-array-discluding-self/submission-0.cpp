class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> preSum(n), suffixSum(n);

        preSum[0] = nums[0];
        for(int i=1; i<n; i++){
            preSum[i] = preSum[i-1] * nums[i];
        }

        suffixSum[n-1] = nums[n-1];
        for(int i=n-2; i>=0; i--){
            suffixSum[i] = suffixSum[i+1] * nums[i];
        }

        vector<int> res(n);
        res[0] = suffixSum[1];
        res[n-1] = preSum[n-2];

        for(int i=1; i<n-1; i++){
            res[i] = preSum[i-1] * suffixSum[i+1];
        }

        return res;
    }
};
