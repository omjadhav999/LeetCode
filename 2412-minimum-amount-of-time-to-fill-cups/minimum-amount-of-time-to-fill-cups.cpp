class Solution {
public:
    int fillCups(vector<int>& amount) {
        int res=0;
        sort(amount.begin(), amount.end());

        while(amount[1] && amount[2]){
            res++;
            amount[1]--;
            amount[2]--;
            sort(amount.begin(), amount.end());
        }
        res = res+amount[2];

    return res;
    }
};