class Solution {
public:
    string findLongestWord(string s, vector<string>& dictionary) {
        string res = "";
        for(int i=0; i<dictionary.size(); i++){
            int j=0, k=0;
            string p = dictionary[i];

            while(k < p.length() && j<s.length()){
                if(s[j] == p[k]){
                    j++;
                    k++;
                }
                else j++;
            }

            if(k == p.length()){
                if(res.length() < p.length()) res = p;
                else if(res.length() == p.length()) res = min(res, p);
            }
        }

    return res;
    }
};