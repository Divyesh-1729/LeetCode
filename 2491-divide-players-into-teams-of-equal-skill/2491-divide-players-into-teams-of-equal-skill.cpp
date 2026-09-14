class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
       sort(skill.begin(),skill.end());
       int n=skill.size();
       int l=0;
       int r =n-1;
       long long ans =0;

       int numtobemade=skill[0]+skill[n-1];
       while(l<r)
        {
            if(skill[l]+skill[r]!=numtobemade)
            {
                return -1;
            }
            ans=ans+(long long)skill[l]*skill[r];
            l++;
            r--;
        }
        return ans;
    }
};