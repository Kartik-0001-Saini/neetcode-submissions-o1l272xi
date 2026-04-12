class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> mp;
        for(auto i:nums){
            mp[i]++;
        }
        vector<pair<int, int>> vec;
        for(auto i:mp){
            vec.push_back({i.second, i.first});
        }
        sort(vec.begin(), vec.end(), greater<pair<int, int>>());
        vector<int> res;
        for(int i=0; i<k; i++){
            res.push_back(vec[i].second);
        }

        return res;
    }
};
