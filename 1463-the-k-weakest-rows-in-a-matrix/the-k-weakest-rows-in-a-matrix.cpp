class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<pair<int, int>> rowS;
        for(int i=0; i<mat.size(); i++){
            int s = accumulate(mat[i].begin(), mat[i].end(), 0);
            rowS.push_back({s, i});
        }

        sort(rowS.begin(), rowS.end());

        vector<int> res;
        for(int i=0; i<k; i++) res.push_back(rowS[i].second);

    return res;
    }
};