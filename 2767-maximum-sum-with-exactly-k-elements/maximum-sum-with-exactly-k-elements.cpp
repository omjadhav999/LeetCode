class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        int strt = *max_element(nums.begin(), nums.end());
        int res=0;
        
        for(int i=0; i<k; i++){
            res = res + strt;
            strt++;
        }
        
    return res;
    }
};