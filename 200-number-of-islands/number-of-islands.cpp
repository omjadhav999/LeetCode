class Solution {
    void dfs(int i, int j, vector<vector<bool>>& visited, vector<vector<char>>& grid){
        if(i<0 || i>=grid.size() || j<0 || j>=grid[0].size()) return;

        if(grid[i][j]=='0' || visited[i][j]) return;

        visited[i][j] = 1;

        dfs(i-1, j, visited, grid);
        dfs(i+1, j, visited, grid);
        dfs(i, j-1, visited, grid);
        dfs(i, j+1, visited, grid);
    };

public:
    int numIslands(vector<vector<char>>& grid) {
        int res=0;
        vector<vector<bool>> visited(grid.size(), vector<bool> (grid[0].size(), 0));

        for(int i=0; i<grid.size(); i++){
            for(int j=0; j<grid[0].size(); j++){
                if(grid[i][j]=='1' && !visited[i][j]){
                    dfs(i, j, visited, grid);
                    res++;
                }
            }
        }

    return res;
    }
};