class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        vector<string> res;
        string prev = "";

        for(int i=0; i<words.size(); i++){
            string w = words[i];
            string sig = w;

            sort(sig.begin(), sig.end());

            if(sig != prev){
                res.push_back(w);
                prev = sig;
            }
        }

    return res;
    }
};