class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.size();
        int freq = 0, maxLen = 0;
        int windowSz = 0;
        int left = 0;
        vector<int> freqArr(26, 0);
        for(int right=0; right<n; right++){
            freqArr[s[right] - 'A']++;
            freq = max(freq, freqArr[s[right] - 'A']);

            windowSz = right-left+1;
            if(windowSz - freq > k){
                freqArr[s[left] - 'A']--;
                left++;
            }

            maxLen = max(maxLen, right-left+1);
        }

        return maxLen;
    }
};
