class Solution {
public:
    int countValidSelections(vector<int>& nums) {
        int ttl = accumulate(nums.begin(), nums.end(), 0);
        int n = nums.size();

        vector<int> pref(n+1);
        pref[0] = 0;
        for(int i=0; i<n; i++) pref[i+1] = pref[i]+nums[i];

        int cnt=0;
        for(int i=0; i<n; i++){
            if(nums[i] == 0){
                if(pref[i] == ttl-pref[i]) cnt = cnt+2;
                else if(abs(ttl-2*pref[i]) == 1) cnt = cnt+1;
            }
        }

    return cnt;
    }
};