class Solution {
public:
    double trimMean(vector<int>& arr) {
        int n = arr.size();
        sort(arr.begin(),arr.end());

        int fivePercent = (5*n)/100;

        
        double sum = 0;
        for(int i=fivePercent;i<n-fivePercent;i++){
            sum+=arr[i];
        }
      
        double ans = sum / (n-(fivePercent*2));
        return ans;
    }
};