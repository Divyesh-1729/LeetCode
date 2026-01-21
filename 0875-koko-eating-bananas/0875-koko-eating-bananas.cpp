class Solution {
public:
 long long compute(vector<int>& piles, int speed) {
    long long hours = 0;
    for (int pile : piles) {
        hours += (long long)ceil((double)pile / speed);
    }
    return hours;
}


    int minEatingSpeed(vector<int>& piles, int h) {
        int s = 1;
        int e = *max_element(piles.begin(), piles.end());
        int ans = e;

        while (s <= e) {
            int mid = s + (e - s) / 2;
            long long totalHours = compute(piles, mid);

            if (totalHours <= h) {
                ans = mid;      // valid speed
                e = mid - 1;    // try smaller
            } else {
                s = mid + 1;    // need faster speed
            }
        }
        return ans;
    }
};
