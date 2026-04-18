class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(), people.end());
        int boat = 0;

        int st = 0, end = people.size()-1;
        while(st <= end){
            if(people[st] + people[end] <= limit){
            st++;
            }
            end--;
            boat++;
        }

        return boat;
    }
};