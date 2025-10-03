class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& matrix) {
        if(matrix.empty() || matrix[0].empty()) return {};
        int m=matrix.size(), n=matrix[0].size();
        vector<int> res(m*n);
        int r=0, c=0;

        for(int i=0; i<m*n; i++){
            res[i] = matrix[r][c];

            if((r+c)%2 == 0){
                if(c == n-1) r++;
                else if(r == 0) c++;
                else r--, c++;
            }
            else{
                if(r == m-1) c++;
                else if(c == 0) r++;
                else r++, c--; 
            }
        }

    return res;
    }
};