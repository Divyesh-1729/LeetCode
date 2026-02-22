class Solution {
public:
    int maxArea(vector<int>& height) {
        int i = 0;
        int j = height.size()-1;
        int maxa = INT_MIN;

        while(i<j)
        {
            int curr = min(height[i], height[j]) * (j-i);
            maxa = max(maxa, curr);

            if(height[i]<height[j])
            {
                i++;
            }
            else
            {
                j--;
            }
        }
        return maxa;
    }
};