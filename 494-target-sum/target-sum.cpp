class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        unordered_map<int, int> cnter;
        cnter[0]=1;
        for(int n : nums){
            unordered_map<int, int> temp;
            for(const auto& [ttl, cnt] : cnter){
                temp[ttl+n] = temp[ttl+n] + cnt;
                temp[ttl-n] = temp[ttl-n] + cnt;            
            }
            cnter = temp;
        }

    return cnter[target];
    }
};