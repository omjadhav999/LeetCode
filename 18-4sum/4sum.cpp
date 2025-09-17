class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> res;
        int n = nums.size();

        if(n < 4) return res;

        sort(nums.begin(), nums.end());

        for(int i=0; i<n; i++){
            if(i>0 && nums[i]==nums[i-1]) continue;

            for(int j=i+1; j<n; j++){
                if(j>i+1 && nums[j]==nums[j-1]) continue;

                int p = j+1;
                int q = n-1;

                while(p < q) {
                    long long sum = (long long)nums[i] + nums[j] + nums[p] + nums[q];

                    if(sum == target) {
                        res.push_back({nums[i], nums[j], nums[p], nums[q]});
                        p++;
                        q--;

                        while(p < q && nums[p] == nums[p - 1]) p++;
                        while(p < q && nums[q] == nums[q + 1]) q--;
                    }
                    else if(sum < target) {
                        p++;
                    }
                    else {
                        q--;
                    }
                }
            }
        }

    return res;
    }
};
