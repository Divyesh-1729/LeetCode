// class Solution {
// public:
//     vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
//         vector<float>check;
//         int x=0;
//         int y =0;
//         float dist = 0;

//         vector<int>ans;
        
//         for(int i=0;i<points.size();i++)
//         {
//             for(int i=0;i<2;i++)
//             {
//                 x= points[i][0];
//                 y = points[i][1];

//                 dist = (pow(x,2))+pow(y,2)) ^ 1.5;
//                 check.push_back(dist);


//             }
//         }

//         sort(check.begin(),check.end());
//         while(k--)
//         {
//             ans.push_back({})
//         }
        
//     }
// };


class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<pair<int, vector<int>>> arr;

        for (auto &p : points) {
            int dist = p[0]*p[0] + p[1]*p[1];
            arr.push_back({dist, p});
        }

        sort(arr.begin(), arr.end());

        vector<vector<int>> ans;
        for (int i = 0; i < k; i++) {
            ans.push_back(arr[i].second);
        }

        return ans;
    }
};