class Solution {
public:
    int maximum69Number (int num) {
        string s = to_string(num);
        int best = num;
        for(char &ch : s)
        {
            if(ch == '6')
            {
                ch = '9';
                best = max(best, stoi(s));    
                
                ch = '6';
            }
           
            
        }

        return best;
    }
};