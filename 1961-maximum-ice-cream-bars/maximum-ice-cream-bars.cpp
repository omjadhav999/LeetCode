class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(), costs.end());
        int res = 0;
        for(int i=0; i<costs.size(); i++){
            if(coins >= costs[i]){
                res++;
                coins = coins-costs[i];
            }
            else break;
        }

    return res;
    }
};