class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        sort(potions.begin(), potions.end());
        int n=spells.size(), m=potions.size();
        vector<int> res(n);

        for(int i=0; i<n; i++){
            long long need = (success+spells[i]-1)/spells[i];
            int idx = lower_bound(potions.begin(), potions.end(), need) - potions.begin();
            res[i] = m-idx;
        }

    return res;
    }
};