class Solution {
public:
    int minMoves(vector<int>& nums) {
        int move=0;
        int maxi=*max_element(nums.begin(),nums.end());
        for(int i:nums)
        {
            if(i<maxi)
            {
                move= move+(maxi-i);
            }
        }   
        return move;
    }
};