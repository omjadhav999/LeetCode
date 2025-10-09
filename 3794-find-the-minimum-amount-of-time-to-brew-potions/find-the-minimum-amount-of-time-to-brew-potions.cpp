class Solution {
public:
    long long minTime(vector<int>& skill, vector<int>& mana) {
        int n=skill.size(), m=mana.size();
        vector<long long> res(n+1, 0);

        for(int j=0; j<m; j++){
            for(int i=0; i<n; i++){
                res[i+1] = max(res[i+1], res[i]) + 1LL*skill[i]*mana[j];
            }

            for(int i=n-1; i>0; i--){
                res[i] = res[i+1] - 1LL*skill[i]*mana[j];
            }
        }

    return res[n];
    }
};