class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        for(auto num:nums){
            mp[num]++;
        }

        vector<pair<int, int>> vec;
        for(auto i:mp){
            vec.push_back({i.second, i.first});
        }
        sort(vec.rbegin(), vec.rend());

        vector<int> res;
        for(int i=0; i<k; i++){
            res.push_back(vec[i].second);
        }

        return res;
    }
};
