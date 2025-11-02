class Solution {
public:
    int countUnguarded(int m, int n, vector<vector<int>>& guards, vector<vector<int>>& walls) {
        vector<vector<int>> grid(m, vector<int>(n, 0));

        for(int i=0; i<guards.size(); i++){
            int r = guards[i][0];
            int c = guards[i][1];
            grid[r][c] = 2;
        }

        for(int i=0; i<walls.size(); i++){
            int r = walls[i][0];
            int c = walls[i][1];
            grid[r][c] = 2;
        }

        int dr[4] = {-1, 0, 1, 0}, dc[4] = {0, 1, 0, -1};

        for(int i=0; i<guards.size(); i++){
            int gr = guards[i][0];
            int gc = guards[i][1];

            for(int d=0; d<4; d++){
                int r = gr+dr[d], c = gc+dc[d];
                while(r>=0 && r<m && c>=0 && c<n && grid[r][c]<2){
                    grid[r][c] = 1;
                    r = r+dr[d];
                    c = c+dc[d];
                }
            }
        }

        int cnt=0;
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(grid[i][j] == 0) cnt++;
            }
        }

    return cnt;
    }
};