class Solution {
public:
    int maxProfit(vector<int>& prices) {
        stack<int> st;
        int n = prices.size();
        int maxPro = 0;

        for(int i=0; i<n; i++){
            if(!st.empty() && prices[i] > prices[st.top()]){
                maxPro += prices[i] - prices[st.top()];
            }
            st.push(i);
        }

        return maxPro;
    }
};