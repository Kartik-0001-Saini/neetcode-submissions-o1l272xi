class Solution {
public:
    bool isPalindrome(string s) {
        string str = "";
        for(int i=0;i<s.size();i++){
            if(isalpha(s[i]) || isdigit(s[i])){
                str+=(char)tolower(s[i]);
            }
        }
        int i=0, j=str.size() -1;
        while(i<j){
            if(str[i]!=str[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};
