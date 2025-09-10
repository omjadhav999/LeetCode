class Solution {
public:
    string sortSentence(string s) {
        string res;
        vector<string> temp(10);
        string word;

        for(int i=0; i<s.length(); i++){
            if(isdigit(s[i])) {
                int idx = s[i] - '0';
                temp[idx] = word; 
                word = "";
                i++;
            } 
            else {
                word = word + s[i];
            }
        }

        for(int i=1; i<10; i++){
            if(!temp[i].empty()){
                res = res + temp[i] + " ";
            }
        }

        if(!res.empty()) res.pop_back();
    return res;
    }
};
