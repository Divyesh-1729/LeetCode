class Solution {
public:
    int numberOfCuts(int n) {
        if(n>=4)
        {
            return 2;
        }
        return n;
    }
};