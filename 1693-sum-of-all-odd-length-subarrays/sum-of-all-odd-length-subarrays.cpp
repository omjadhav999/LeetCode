class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int n = arr.size();
        long long res=0;
        vector<int> pref(n+1, 0);

        for(int i=0; i<n; i++) pref[i+1] = pref[i]+arr[i];
        for(int len=1; len<=n; len=len+2){
            for(int l=0, r=len-1; r<n; l++, r++){
                res = res + pref[r+1] - pref[l];
            }
        }

    return res;
    }
};