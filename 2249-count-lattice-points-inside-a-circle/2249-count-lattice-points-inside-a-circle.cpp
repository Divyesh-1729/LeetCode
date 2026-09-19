class Solution {
public:
    int countLatticePoints(vector<vector<int>>& circles) {
        int count =0;
        int n= circles.size();

        for(int i=0;i<=200;i++)
        {
            for(int j=0;j<=200;j++)
            {
                for(int p=0;p<n;p++)
                {
                    int x=circles[p][0];
                    int y=circles[p][1];
                    int r=circles[p][2];

                    if(((x-i)*(x-i)+(y-j)*(y-j))<=r*r)

                    {
                        count++;
                        break;
                    }
                }
            }
        }

        return count;



    }
};