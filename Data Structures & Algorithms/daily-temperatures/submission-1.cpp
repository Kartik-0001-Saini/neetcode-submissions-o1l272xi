class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        int n = temp.size();
        stack<int> st;
        vector<int> res(n, 0);
        for(int i=0; i<n; i++){
            while(!st.empty() && temp[st.top()] < temp[i]){
                int idx = st.top();
                st.pop();
                res[idx] = i-idx;
            }
            st.push(i);
        }

        return res;
    }
};
