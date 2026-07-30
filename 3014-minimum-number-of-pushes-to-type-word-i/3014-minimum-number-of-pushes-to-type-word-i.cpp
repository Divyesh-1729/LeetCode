class Solution {
public:
    int minimumPushes(string word) {
        int result =0;
        unordered_map<int,int>mp;

        int assign= 2; //2 nantar round firun parat 2 varach
        for(char &ch:word)
        {
            if(assign >9)
            {
                assign=2;
            }

            mp[assign]++;
            result =result+mp[assign];
            assign++;

        }
        return result;
    }
};