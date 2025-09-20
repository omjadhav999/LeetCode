class Solution {
public:
    vector<int> findColumnWidth(vector<vector<int>>& grid) {
        vector<int> res;
        for(int j=0; j<grid[0].size(); j++){
            int ms=INT_MAX, md= INT_MIN;

            for(int i=0; i<grid.size(); i++){
                ms = min(ms, grid[i][j]);
                md = max(md, grid[i][j]);
            }

            string a = to_string(md);
            string b = to_string(ms);
            res.push_back(max(a.size(), b.size()));
        }

    return res;
    }
};