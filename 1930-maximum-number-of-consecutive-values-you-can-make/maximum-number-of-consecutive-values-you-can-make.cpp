class Solution {
public:
    int getMaximumConsecutive(vector<int>& coins) {
        int res=1;
        sort(coins.begin(), coins.end());
        for(int i=0; i<coins.size() && coins[i]<=res; i++) res = res+coins[i];

    return res;
    }
};