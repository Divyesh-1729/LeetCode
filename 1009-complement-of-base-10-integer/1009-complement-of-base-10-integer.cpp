class Solution {
public:
    int bitwiseComplement(int n) {
        if(n == 0) return 1;
        int num{};
        int p = 0;
        while(n){
            int digit = n % 2;
            if(digit == 0){
                num += pow(2,p);
            }
            n /= 2;
            p += 1;
        }
        return num;
    }
};