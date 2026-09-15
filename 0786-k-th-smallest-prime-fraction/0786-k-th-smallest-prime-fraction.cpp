class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
        vector<pair<double, pair<int,int>>> store;
        int n=arr.size();
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                double fraction = (double)arr[i]/arr[j];
                store.push_back({fraction,{arr[i],arr[j]}});
            }
        }
        sort(store.begin(),store.end());
        return {store[k-1].second.first,store[k-1].second.second}; //He lakshat thevne
        


    }
};