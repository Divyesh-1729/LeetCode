class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>final;
        for(int i = 0; i<nums1.size();i++)
        {
                final.push_back(nums1[i]);
        }
        for(int j = 0; j<nums2.size();j++)
        {
                final.push_back(nums2[j]);
        }
        sort(final.begin(),final.end());
        int s = 0;
        int e = final.size();
        int mid = s+(e-s)/2;
       if (e == 0) return 0.0; 

        if (e % 2 == 1) {
            return double(final[e / 2]); 
        } else {
           
            return (double(final[e / 2 - 1]) + double(final[e / 2])) / 2.0;
        }
    }
};