class Solution {
public:
    int mirrorDistance(int n) {
        int vriginal = n; //Return to store this then compute...Ithe mi chukto

        int rev = 0;

    while (n != 0) {
        int digit = n % 10;
        rev = rev * 10 + digit;
        n = n / 10;
        
    }
        
        return abs(vriginal-rev);
    }
};

// string str = to_string(n);
//         reverse(str.begin(),str.end());
//         return abs(stoi(str)-n);