class Solution {
public:
bool isvowel(char ch)
{
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
    {
        return true;
    }
    return false;
}
    int maxVowels(string s, int k) 
    {
        int n= s.length();
        int i=0;
        int j=0;
        int count =0;
        int ans = INT_MIN;

        while(j<n)
        {
            if(isvowel(s[j]))
            {
                count++;
            }
            if((j-i+1)==k)
            {
                ans= max(ans, count);

                if(isvowel(s[i]))
                {
                    count--;
                }
                i++;
            }
            j++;
        }

        return ans;


    }
};