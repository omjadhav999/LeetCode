class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> res;
        vector<int> ds;
        check(0, target, candidates, res, ds);

    return res;
    }

    void check(int ind, int target, vector<int>& arr, vector<vector<int>>& res, vector<int>& ds){
        if(target == 0){
            res.push_back(ds);
            return;
        }

        for(int i=ind; i<arr.size(); i++){
            if(i>ind && arr[i]==arr[i-1]) continue;
            if(arr[i] > target) break;
            ds.push_back(arr[i]);
            check(i+1, target-arr[i], arr, res, ds);
            ds.pop_back();
        }
    }
};