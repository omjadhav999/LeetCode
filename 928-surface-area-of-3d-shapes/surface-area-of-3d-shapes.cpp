class Solution {
public:
    int surfaceArea(vector<vector<int>>& grid) {
        int res=0;
        if(grid.size() == 1){
            return (grid[0][0]*4)+(grid[0][0] ? 2 : 0);
        }

        for(int i=0; i<grid.size(); i++){
            for(int j=0; j<grid.size(); j++){
                if(grid[i][j] != 0) res = res+2;
                if(i==0 || i==grid.size()-1) res = res+grid[i][j];
                if(j==0 || j==grid.size()-1) res = res+grid[i][j];
                if(i-1 >= 0) res = res+abs(grid[i][j]-grid[i-1][j]);
                if(j-1 >=0) res = res+abs(grid[i][j]-grid[i][j-1]);
            }
        }

    return res;
    }
};