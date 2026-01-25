class Solution {
public:
    int smallestEvenMultiple(int n) {
        //int min = INT_MAX;
        vector<int>v;
        
        for(int i = n ; i<=2*n;i++)
        {
            if(i%2==0 && i%n==0)
            {
                v.push_back(i);
            }
        }
        int min = *min_element(v.begin(),v.end());
        return min;
        
    }
};