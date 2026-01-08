// class Solution {
// public:
    // int subarraySum(vector<int>& nums, int k) {
    //     int count = 0;
    //     int n = nums.size();

    //     for(int i =0;i<n;i++)
    //     {
    //         int sum = 0;
    //         for(int j =i;j < n;j++)
    //         {
    //             sum  = sum + nums[j];
    //             if(sum ==k)
    //             {
    //                 count++;
    //             }
    //         }
    //     }
    //     return count;

        
    // }

    // {
    //     int ans = 0, n = nums.size();
    //     unordered_map<int, int> mp;
    //     int sum=0;
    //     for(int i=0; i<n; i++){
    //         mp[sum]++;
    //         sum+=nums[i];
    //         int rem = sum-k;

    //         if(mp.find(rem) != mp.end()){
    //             ans+=mp[rem];
    //         }

    //     }

       

//         return ans;
//     }
// };

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int ans = 0, n = nums.size();
        unordered_map<int, int> mp;
        int sum=0;
        for(int i=0; i<n; i++){
            mp[sum]++;
            sum+=nums[i];
            int rem = sum-k;

            if(mp.find(rem) != mp.end()){
                ans+=mp[rem];
            }

        }

       

        return ans;
    }
};