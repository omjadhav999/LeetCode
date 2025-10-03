class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> path;
        backtrack(candidates, target, 0, path, res);

    return res;
    }

    void backtrack(vector<int>& arr, int rem, int idx, vector<int>& path, vector<vector<int>>& res){
        if(rem == 0){
            res.push_back(path);
            return;
        }

        if(idx==arr.size() || rem<0) return;

        path.push_back(arr[idx]);
        backtrack(arr, rem-arr[idx], idx, path, res);
        path.pop_back();

        backtrack(arr, rem, idx+1, path, res); 
    }
};