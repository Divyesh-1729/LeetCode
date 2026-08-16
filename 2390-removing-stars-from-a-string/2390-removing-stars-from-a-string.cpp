class Solution {
public:
    string removeStars(string s) {
        stack<char>st;
        for(char& ch:s)
        {
            if(ch=='*')
            {
                if(!st.empty())
                {
                    st.pop();
                }
                
            }
            else
                {
                    st.push(ch);
                }

        }
        string navin ="";
        while(!st.empty())
        {
            navin.push_back(st.top());
            st.pop();
        }
        reverse(navin.begin(),navin.end());
        return navin;
    }
};