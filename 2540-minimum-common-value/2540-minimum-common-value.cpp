// class Solution {
// public:
//     int getCommon(vector<int>& nums1, vector<int>& nums2) {
//         unordered_map<int,int>mp;
//         int ans = -1;
//         for(int i :nums1)
//         {
//             mp[i]++;
//         }
//         for(int i :nums2)
//         {
//             mp[i]++;
//         }
//         for(auto& it:mp)
//         {
//             if(it.second==2)
//             {
//                ans = mp[it.second];
//             }
//         }
//         return ans;
//     }
// };
class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {

        unordered_set<int> st(nums1.begin(), nums1.end());

        for(int x : nums2)
        {
            if(st.count(x))
                return x;   
        }

        return -1;
    }
};
