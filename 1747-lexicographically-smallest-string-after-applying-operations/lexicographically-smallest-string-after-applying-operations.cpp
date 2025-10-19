class Solution {
public:
    string findLexSmallestString(string s, int a, int b) {
        unordered_set<string> visi;
        string sml = s;
        queue<string> q;
        q.push(s);
        visi.insert(s);

        while(!q.empty()){
            string curr = q.front();
            q.pop();
            if(curr < sml) sml = curr;

            string add = curr;
            for(int i=1; i<add.size(); i=i+2){
                add[i] = ((add[i] - '0' + a) % 10) + '0';
            }

            if(!visi.count(add)){
                visi.insert(add);
                q.push(add);
            }

            string rot = curr.substr(curr.size() - b) + curr.substr(0, curr.size() - b);
            if(!visi.count(rot)){
                visi.insert(rot);
                q.push(rot);
            }
        }

    return sml;
    }
};