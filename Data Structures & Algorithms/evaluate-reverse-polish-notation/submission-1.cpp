class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        int n = tokens.size();
        stack<int> st;
        for(int i=0; i<n; i++){
            if(tokens[i] != "+" && tokens[i] != "-" && tokens[i] != "*" && tokens[i] != "/"){
                st.push(stoi(tokens[i]));
            }
            else{
                int topEle = st.top();
                st.pop();
                int secEle = st.top();
                st.pop();
                if(tokens[i] == "+"){
                    int sum = topEle + secEle;
                    st.push(sum);
                }
                if(tokens[i] == "-"){
                    int sum = secEle - topEle;
                    st.push(sum);
                }
                if(tokens[i] == "*"){
                    int sum = topEle * secEle;
                    st.push(sum);
                }
                if(tokens[i] == "/"){
                    int sum = secEle / topEle;
                    st.push(sum);
                }
            }
        }

        return st.top();
    }
};
