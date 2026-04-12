class Solution {
public:

    void backtrack(int n, int openP, int closeP, string parth, vector<string>& res){
        if(closeP == openP && openP+closeP == 2*n){
            res.push_back(parth);
            return;
        }

        if(openP < n){
            backtrack(n, openP+1, closeP, parth+'(', res);
        }
        if(closeP < openP){
            backtrack(n, openP, closeP+1, parth+')', res);
        }
    }

    vector<string> generateParenthesis(int n) {
        vector<string> res;

        backtrack(n, 0, 0, "", res);
        return res;
    }
};
