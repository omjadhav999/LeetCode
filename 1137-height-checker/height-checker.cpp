class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> expt;
        expt = heights;

        sort(expt.begin(), expt.end());

        int cnt=0;

        for(int i=0; i<heights.size(); i++){
            if(heights[i]!=expt[i]){
                cnt++;
            }
        }

    return cnt;
    }
};