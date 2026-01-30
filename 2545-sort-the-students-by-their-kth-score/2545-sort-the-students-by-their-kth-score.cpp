class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
        vector<pair<int,int>>sorted;
        for(int i = 0; i < score.size();i++)
        {
            sorted.push_back({score[i][k],i});
        }
        sort(sorted.begin(),sorted.end(), greater<>());
        vector<vector<int>> result;
        for(auto &p :sorted) 
        {
            result.push_back(score[p.second]);
        }
        return result;
    }
};