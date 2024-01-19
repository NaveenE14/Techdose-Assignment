class Solution {
public:
    int rec(vector<vector<int>>&grid, int row ,int col,vector<vector<int>>&dp){
        if(dp[row][col]!=0){
            return dp[row][col];
        }
        if(row==grid.size()-1 && col==grid[0].size()-1){
            return dp[row][col]=grid[row][col];
        }
        if(row==grid.size()){
            return dp[row][col]=1e9;
        }
        if(col==grid[0].size()){
            return dp[row][col]=1e9;
        }
        int a=rec(grid,row+1,col,dp)+grid[row][col];
        int b=rec(grid,row,col+1,dp)+grid[row][col] ;
        return dp[row][col]=min(a,b);
    } 
    int minPathSum(vector<vector<int>>& grid) {
        int row = grid.size();
        int col = grid[0].size();
        vector<vector<int>>dp(row+1 , vector<int>(col+1,0));
        int ans=rec(grid,0,0,dp);
        return ans;
    }
};
