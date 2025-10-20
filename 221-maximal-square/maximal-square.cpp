class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        if(matrix.empty()) return 0;

        int m=matrix.size(), n=matrix[0].size(), s=0, prev;
        vector<int> curr(n, 0);

        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                int temp = curr[j];
                if(!i || !j || matrix[i][j]=='0') curr[j] = matrix[i][j]-'0';
                else curr[j] = min(prev, min(curr[j], curr[j-1])) + 1;

                s = max(curr[j], s);
                prev = temp;
            }
        }

    return s*s;
    }
};