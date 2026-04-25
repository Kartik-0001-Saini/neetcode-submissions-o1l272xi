class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(), people.end());
        int n = people.size();
        int st = 0, end = n-1;
        int boat = 0;
        while(st <= end){
            if(people[st] + people[end] <= limit){
                st++;
            }
            boat++;
            end--;
        }

        return boat;
    }
};