class Solution {
public:
    int minimumOneBitOperations(int n) {
        int res=0;
        while(n){
            res = res^n;
            n = n>>1;
        }

    return res;
    }
};