class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
      vector<int>reverseno;
      for(int i : nums)  
      {
        int reverse= 0;
        while(i>0)
        {
            int digit = i%10;
            reverse = reverse*10+digit;
            i = i/10;
        }
        reverseno.push_back(reverse);

      }
      unordered_set<int> st;

      for(int x:nums) 
        {
            st.insert(x);
        }

        for(int x: reverseno)
        {
         st.insert(x);
        }

        return st.size();

    }
};