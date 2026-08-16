class Solution {
public:
int m;
int n;
int oldcolor;
    void dfs(vector<vector<int>>& image, int i, int j, int color)
    {
        if(i<0||j<0||i>=m||j>=n)
        {
            return;
        }
        if(image[i][j]!=oldcolor)
        {
            return;
        }

        image[i][j]=color;

        dfs(image,i+1,j,color);
        dfs(image,i,j+1,color);
        dfs(image,i-1,j,color);
        dfs(image,i,j-1,color);

    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
         m = image.size();
         n=image[0].size();

         oldcolor =image[sr][sc];

         if(oldcolor==color)
         {
            return image;
         }



        dfs(image,sr,sc,color);
        return image;
    }
};