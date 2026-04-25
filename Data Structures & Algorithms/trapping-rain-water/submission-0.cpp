class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        vector<int> leftArr(n), rightArr(n);
        leftArr[0] = height[0];
        for(int i=1; i<n; i++){
            leftArr[i] = max(leftArr[i-1], height[i]);
        }

        rightArr[n-1] = height[n-1];
        for(int i=n-2; i>=0; i--){
            rightArr[i] = max(rightArr[i+1], height[i]);
        }

        int maxWater = 0;
        for(int i=0; i<n; i++){
            maxWater += min(leftArr[i], rightArr[i]) - height[i];
        }

        return maxWater;
    }
};
