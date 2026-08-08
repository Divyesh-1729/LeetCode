class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {

        vector<int>diff(n,0);
        for(auto& it:bookings)
        {
            int first = it[0];
            int last = it[1];
            int seats = it[2];

            for(int i=first;i<=last;i++)
            {
                diff[i-1]=diff[i-1]+ seats;
            }       

        }

        return diff;



    }
};