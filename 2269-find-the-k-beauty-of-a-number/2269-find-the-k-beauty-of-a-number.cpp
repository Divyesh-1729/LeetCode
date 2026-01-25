class Solution {
public:
    int divisorSubstrings(int num, int k) {
        int count = 0;
        string s = to_string(num);

        for(int i = 0;i+k<=s.size();i++)
        {
            int digits = stoi(s.substr(i,k));
            if(digits!=0 && num% digits ==0)
            {
                count++;
            }
        }
        return count;
        
    }
};