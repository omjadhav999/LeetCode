class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1 || numRows >= s.length()) {
            return s;
        }

        int idx = 0, d = 1;
        vector<vector<char>> rows(numRows);

        for(int i=0; i<s.size(); i++){
            char c=s[i];
            rows[idx].push_back(c);
            if(idx == 0){
                d=1;
            }
            else if(idx == numRows-1){
                d=-1;
            }

            idx = idx + d;
        }

        string res;
        for(int i=0; i<rows.size(); i++){
            for(int j=0; j<rows[i].size(); j++){
                res = res + rows[i][j];
            }
        }

    return res;
    }
};