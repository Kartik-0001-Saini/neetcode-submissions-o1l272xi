class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> numSet(nums.begin(), nums.end());
        int longest = 0;
        for(int num : numSet){
            int len = 0;
            while(numSet.find(len+num) != numSet.end()){
                len+=1;
            }
            longest = max(len, longest);
        }

        return longest;
    }
};
