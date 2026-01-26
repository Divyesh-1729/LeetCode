class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        vector<vector<int>>nums;
        sort(arr.begin(),arr.end());
        int mindiff = INT_MAX;

        for(int i =0;i<arr.size()-1;i++)
        {
            int diff = arr[i+1]-arr[i];

            if(diff<mindiff)
            {
                mindiff = diff;
                nums.clear();
                nums.push_back({arr[i],arr[i+1]});


            }
            else if(diff == mindiff)
            {
                nums.push_back({arr[i], arr[i + 1]});
            }
        }
        return nums;

    }
};