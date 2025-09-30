class Solution {
public:
    int minimumLines(vector<vector<int>>& stockPrices) {
        if(stockPrices.size() == 1) return 0;
        sort(stockPrices.begin(), stockPrices.end());

        int res = 1;
        for(int i=2; i<stockPrices.size(); i++){
            long x1 = stockPrices[i-2][0], x2 = stockPrices[i-1][0], x3 = stockPrices[i][0];
            long y1 = stockPrices[i-2][1], y2 = stockPrices[i-1][1], y3 = stockPrices[i][1];
            long diff1 = (x1-x3)*(y1-y2);
            long diff2 = (x1-x2)*(y1-y3);
            if(diff1 != diff2) res++;
        }

    return res;
    }
};