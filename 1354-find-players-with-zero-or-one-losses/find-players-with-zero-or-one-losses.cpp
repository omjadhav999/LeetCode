class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        unordered_map<int, int> lostMap;
        for(int i=0; i<matches.size(); i++){
            int lose = matches[i][1];
            lostMap[lose]++;
        }

        vector<int> notLost, onceLost;
        for(int i=0; i<matches.size(); i++){
            int winner = matches[i][0];
            int looser = matches[i][1];

            if(lostMap.find(winner) == lostMap.end()){
                notLost.push_back(winner);
                lostMap[winner] = 2;
            }

            if(lostMap[looser] == 1) onceLost.push_back(looser);
        }

        sort(notLost.begin(), notLost.end());
        sort(onceLost.begin(), onceLost.end());

    return {notLost, onceLost};
    }
};