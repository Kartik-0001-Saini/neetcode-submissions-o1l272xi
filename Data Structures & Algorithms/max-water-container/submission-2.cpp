class Solution {
public:
    int maxArea(vector<int>& heights) {
        int st = 0, end = heights.size()-1;
        int maxWater = 0;
        while(st < end){
            int totalWater = (end - st) * min(heights[st], heights[end]);
            maxWater = max(maxWater, totalWater);
            if(heights[st] < heights[end]){
                st++;
            }
            else{
                end--;
            }
        }

        return maxWater;
    }
};
