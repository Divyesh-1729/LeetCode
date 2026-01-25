class Solution {
public:
    
        

        int minPair(vector<int> &v){
        int min_sum = INT_MAX;

        int pos = -1;
        for(int i = 0; i <v.size() - 1; i ++){
        if(v[i] + v[i + 1] < min_sum)
        {
            min_sum = v[i] + v[i + 1];
            pos = i;
        }
    }
    return pos;
}

void mergePair(vector<int>&v, int pos)
    {
        v[pos] = v[pos] + v[pos + 1];
        v.erase(v.begin()+ pos + 1);
    }

    int minimumPairRemoval(vector<int>& nums) {
            int sol = 0;
            while(!is_sorted(nums.begin(),nums.end()))
            {
                mergePair(nums,minPair(nums));
                sol = sol+1;
            }
            return sol;


        
    }
};