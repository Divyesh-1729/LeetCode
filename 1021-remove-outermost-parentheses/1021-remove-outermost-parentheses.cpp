class Solution {
public:
    string removeOuterParentheses(string s) {
        int count =0;
        string op="";
        for(char &ch:s)
        {
            if(ch==')')
            {
                count--;
            }
            if(count!=0)
            {
                op.push_back(ch);
            }
            if(ch=='(')
            {
                count++;
            }
            
            

        }
        return op;
    }
};