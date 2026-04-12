class MinStack {
public:

    stack<int> st;
    MinStack() {
        
    }
    
    void push(int val) {
        st.push(val);
    }
    
    void pop() {
        st.pop();
    }
    
    int top() {
        int topEle = st.top();
        return topEle;
    }
    
    int getMin() {
        stack<int> dupStack;
        int minEle = INT_MAX;
        while(!st.empty()){
            int topEle = st.top();
            minEle = min(minEle, topEle);
            dupStack.push(topEle);
            st.pop();
        }
        while(!dupStack.empty()){
            st.push(dupStack.top());
            dupStack.pop();
        }

        return minEle;
    }
};
