class Solution {
public:
    int countPoints(string rings) {
        unordered_map<int, set<char>> mpp;

        for(size_t i=0; i<rings.size(); i=i+2){
            char color = rings[i];
            int rod = rings[i+1] - '0';
            mpp[rod].insert(color);
        }

        int cnt=0;
        for(const auto& pair : mpp){
            if(pair.second.size() == 3) cnt++;
        }

    return cnt;
    }
};