class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        string str = strs[0];

        for(int i=0; i<n; i++){
            int idx = 0;
            for(auto ch:str){
                if(ch == strs[i][idx]){
                    idx++;
                }
                else{
                    break;
                }
            }

            str = str.substr(0, idx);
        }

        return str;
    }
};