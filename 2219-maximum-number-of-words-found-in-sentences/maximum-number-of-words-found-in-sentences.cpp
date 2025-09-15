class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int res = 0;
        for(int i=0; i<sentences.size(); i++){
            string s = sentences[i];
            int cnt = 1;

            for(int j=0; j<s.size(); j++){
                char c = s[j];
                if(c == ' ') cnt++;
            }

            res = max(res, cnt);
        }

    return res;
    }
};
