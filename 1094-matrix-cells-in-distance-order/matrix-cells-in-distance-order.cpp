class Solution {
public:
    vector<vector<int>> allCellsDistOrder(int rows, int cols, int rc, int cc) {
        vector<vector<int>> res;
        vector<pair<int, pair<int, int>>> v;

        for(int i=0; i<rows; i++){
            for(int j=0; j<cols; j++){
                int dist = abs(i-rc) + abs(j-cc);
                v.push_back({dist, {i, j}});
            }
        }

        sort(v.begin(), v.end());
        for(int i=0; i<v.size(); i++){
            res.push_back({v[i].second.first, v[i].second.second});
        }

    return res;
    }
};