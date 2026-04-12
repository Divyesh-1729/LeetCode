class Solution {
public:
    bool squareIsWhite(string coordinates) {
        int a = coordinates[0]- 'a'+1;
        int b = coordinates[1] - '0';

        if((a+b)%2==1)
        {
            return true;
        }
        return false;

    }
};