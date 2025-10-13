class Solution {
    vector<vector<int>> dp;
public:
    int helper(int n, int size){
        if(n == 0) return 1;
        if(dp[n][size] != -1) return dp[n][size];
        int res = 0;

        for(int i=0; i<size; i++) res = res + helper(n-1, size-i);

    return dp[n][size] = res;
    }

    int countVowelStrings(int n) {
        dp.resize(n+1, vector<int> (6, -1));

    return helper(n, 5);
    }
};