class Solution {
public:

    bool isPalindrom(string& s, int left, int right){
        while(left < right){
            if(s[left] != s[right]){
                return false;
            }
            left++;
            right--;
        }

        return true;
    }

    bool validPalindrome(string s) {
        string str = "";
        for(auto ch:s){
            if(isalnum(ch)){
                str+=tolower(ch);
            }
        }

        int left = 0, right = str.size()-1;
        while(left<right){
            if(str[left] == str[right]){
                left++;
                right--;
            }
            else{
                return (isPalindrom(str, left+1, right) || isPalindrom(str, left, right-1));
            }
        }

        return true;
    }
};