class Solution {
public:

    bool isSameFreq(int freq[], int windowFreq[]){
        for(int i=0; i<26; i++){
            if(freq[i] != windowFreq[i]){
                return false;
            }
        }

        return true;
    }

    bool checkInclusion(string s1, string s2) {
        int n1 = s1.size(), n2 = s2.size();
        int freq[26] = {0};
        for(int i=0; i<n1; i++){
            freq[s1[i] - 'a']++;
        }

        int windowSize = n1;
        for(int i=0; i<n2; i++){
            int windowIdx = 0, idx = i;
            int windowFreq[26] = {0};
            while(windowIdx < windowSize && idx < n2){
                windowFreq[s2[idx] - 'a']++;
                windowIdx++;
                idx++;
            }

            if(isSameFreq(freq, windowFreq)){
                return true;
            }
        }

        return false;
    }
};
