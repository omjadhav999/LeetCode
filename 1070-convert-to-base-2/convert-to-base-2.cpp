class Solution {
public:
    string baseNeg2(int n) {
        if(n == 0) return "0";
        string res = "";

        while(n != 0){
            int r = n%(-2);
            n = n/(-2);

            if(r<0){
                r = r+2;
                n = n+1;
            }
            res = to_string(r) + res;
        }

    return res;
    }
};