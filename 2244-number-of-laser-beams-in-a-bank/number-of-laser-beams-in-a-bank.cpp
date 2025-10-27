class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int ttl=0, prev=0;

        for(int i=0; i<bank.size(); i++){
            string row = bank[i];
            int curr = 0;

            for(int j=0; j<row.length(); j++){
                if(row[j] == '1') curr++;
            }

            if(curr == 0) continue;

            ttl = ttl + prev*curr;
            prev = curr;
        }

    return ttl;
    }
};
