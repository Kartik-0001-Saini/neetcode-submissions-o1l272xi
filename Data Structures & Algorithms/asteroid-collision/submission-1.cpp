class Solution {
public:
    vector<int> asteroidCollision(vector<int>& aster) {
        stack<int> st;

        for(auto as : aster){
            bool destroy = false;

            while(!st.empty() && st.top() > 0 && as < 0){
                if(abs(st.top()) < abs(as)){
                    st.pop();
                    continue;
                }
                else if(abs(st.top()) == abs(as)){
                    st.pop();
                }
                destroy = true;
                break;
            }

            if(!destroy){
                st.push(as);
            }
        }

        vector<int> res(st.size());
        for(int i=st.size()-1; i>=0; i--){
            res[i] = st.top();
            st.pop();
        }

        return res;
    }
};