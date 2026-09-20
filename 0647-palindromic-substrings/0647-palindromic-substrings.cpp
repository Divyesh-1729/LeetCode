class Solution {
public:
    bool ispalin(string& s,int i, int j)
    {
        while(i<j)
        {
            if(s[i]!=s[j])
            {
                return false;
            }
            else
            {
                i++;
                j--;
            }
        }
        return true;
    }
    int countSubstrings(string s) {
        int n = s.length();
        int count =0;

        for(int i=0;i<n;i++)
        {
            for(int j=i;j<n;j++)
            {
                if(ispalin(s,i,j))
                {
                    count++;
                }
            }
        }
        return count;
    }
};