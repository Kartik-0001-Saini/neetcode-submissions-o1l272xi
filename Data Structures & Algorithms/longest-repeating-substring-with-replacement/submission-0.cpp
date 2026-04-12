class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> res(26, 0);
        int left = 0, maxFre = 0, maxLen = 0;
        int n = s.size();

        for(int right=0; right<n; right++){
            res[s[right] - 'A']++;
            // For checking that current element has maximum frequency or other one.
            maxFre = max(maxFre, res[s[right]-'A']);
            int windowSize = right - left + 1;
            
            if(windowSize-maxFre > k){
                res[s[left]-'A']--;
                left++;
            }
            maxLen = max(maxLen, right-left+1);
        }

        return maxLen;
    }
};
