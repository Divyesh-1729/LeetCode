class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {

        vector<int>diff(n,0);
        for(auto& it:bookings)
        {
            int first = it[0];
            int last = it[1];
            int seats = it[2];

            diff[first-1] = diff[first-1]+seats;  //index 1 pasun chalu;
            if(last<n)
            {
                diff[last] = diff[last]-seats;
            }

        }

        for(int i=1;i<n;i++)
        {
            diff[i]= diff[i-1]+diff[i];
        }

        return diff;


    }
};