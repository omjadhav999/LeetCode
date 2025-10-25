class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int m=grid.size(), n=grid[0].size();
        int dp[n];

        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(i+j == 0) dp[0] = grid[i][j];
                else if(i == 0) dp[j] = grid[i][j] + dp[j-1];
                else if(j == 0) dp[j] = grid[i][j] + dp[j];
                else dp[j] = grid[i][j] + min(dp[j], dp[j-1]);
            }
        }

    return dp[n-1];
    }
};