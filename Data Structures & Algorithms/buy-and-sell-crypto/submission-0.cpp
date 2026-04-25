class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int maxPro = 0;
        int minPri = prices[0];

        for(int i=0; i<n; i++){
            minPri = min(prices[i], minPri);
            maxPro = max(maxPro, prices[i] - minPri);
        }

        return maxPro;
    }
};
