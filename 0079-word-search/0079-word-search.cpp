class Solution {
public:
int m;
int n;

vector<vector<int>> directions{{1,0},{0,1},{-1,0},{0,-1}};

    bool solve(vector<vector<char>>& board, string& word,int i, int j, int idx)
    {
        if(idx==word.size())
        {
            return true;
        }
        if(i<0||j<0||i>=m||j>=n)
        {
            return false;
        }

        if(word[idx]!=board[i][j])
        {
            return false;
        }

        char temp= board[i][j];
        board[i][j] ='$';

        for(auto& dir:directions)
        {
            int newi= i+dir[0];
            int newj= j+dir[1];

            if(solve(board,word,newi,newj,idx+1))
            {
                return true;
            }

        }

        board[i][j]= temp;

        return false;





        


    }
    bool exist(vector<vector<char>>& board, string word) {
        m = board.size();
        n = board[0].size();

        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(board[i][j]== word[0] && solve(board,word,i,j,0))
                {
                    return true;
                }
            }
        }

        return false;
        
    }
};