class Solution {
    public List<List<String>> solveNQueens(int n) {
        List<List<String>> ans = new ArrayList<>();
        // consider a board with all '.' values at the start
        char[][] board = new char[n][n];
        for(char[] curr: board){
            Arrays.fill(curr, '.');
        }
        // take a  left array which tracks if the left side of the row has a Queen
        // size is n as we have n rows
        int[] left = new int[n];
        // take a  upper diagonal array which tracks if the left side of the uppde diagonal has a Queen
        // size is 2n-1 as we add row + col to match with all diagonals, it ranges between 0 to 2n-1
        int[] upperD = new int[2*n-1];
        // take a  lower diagonal array which tracks if the left side of the lower diagonal has a Queen
         // size is 2n-1 as we add (n-1) + col - row to match with all diagonals, it ranges between 0 to 2n-1
        int[] lowerD = new int[2*n-1];
        backtrack(board, 0, ans, left, upperD, lowerD, n);
        return ans;
    }

    private void backtrack(char[][] board, int col, List<List<String>> ans, int[] left, int[] upperD, int[] lowerD, int n){
        // if all colams satisfy the placement of queen and we come out of bond it is a valid placement
        if(col == n){
            List<String> list = new ArrayList<>();
            // convert to string and add to result
            for(int i=0; i<n; i++){
                StringBuffer sb = new StringBuffer();
                for(int j=0; j<n; j++){
                    sb.append(board[i][j]);
                }
                list.add(sb.toString());
            }
            ans.add(list);
            return;
        }
        for(int row=0; row<n; row++){
            // if left, upper diagonal and lower diagonal do not have queen then that is a valid placement
            if(left[row] == 0 && upperD[n-1 + col - row] == 0 && lowerD[row + col] == 0){
                // place a queen at that place
                board[row][col] = 'Q';
                // mark that row
                left[row] = 1;
                // mark to upper diagonal array where all the diagonal line is marked using row + col
                upperD[n-1 + col - row] = 1;
                // mark to lower diagonal array where all the diagonal line is marked
                // we add n-1 before col - row to avoid -ve values
                lowerD[row + col] = 1;
                backtrack(board, col+1, ans, left, upperD, lowerD, n);
                // remove all markings and backtrack
                board[row][col] = '.';
                left[row] = 0;
                upperD[n-1 + col - row] = 0;
                lowerD[row + col] = 0;
            }
        }
    }
}