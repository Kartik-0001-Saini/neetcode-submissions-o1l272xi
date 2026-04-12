class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left = 0, right = 0;
        int n = s.size();
        if(n<=1) return n;

        int maxLen = 0;
        string str = "";
        while(right < n){
            if(str.find(s[right]) == string::npos){
                str+=s[right];
                maxLen = max(maxLen, (int)str.size());
                right++;
            }
            else{
                str.erase(0, 1);
                left++;
            }
        }

        return maxLen;
    }
};
