class Solution {
public:

    bool canEat(vector<int>& piles, int h, int mid){
        long long totalHours = 0;
        for(auto pile : piles){
            totalHours += (pile + mid - 1) / mid;
            if(totalHours > h){
                return false;
            }
        }

        return totalHours <= h;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int st = 1;
        int end = *max_element(piles.begin(), piles.end());
        int ans = end;

        while(st <= end){
            int mid = st + (end-st)/2;
            if(canEat(piles, h, mid)){
                ans = mid;
                end = mid - 1;
            }
            else{
                st = mid+1;
            }
        }
        return ans;
    }
};
