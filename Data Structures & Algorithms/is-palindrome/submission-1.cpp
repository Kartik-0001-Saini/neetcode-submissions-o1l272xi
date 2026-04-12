class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.size();
        string str = "";
        for(int i=0; i<n; i++){
            if(isalpha(s[i])){
                str+=tolower(s[i]);
            }
            else if(isdigit(s[i])){
                str+=s[i];
            }
        }

        int left = 0, right = str.size()-1;
        while(left < right){
            if(str[left] != str[right]){
                return false;
            }
            left++;
            right--;
        }

        return true;
    }
};
