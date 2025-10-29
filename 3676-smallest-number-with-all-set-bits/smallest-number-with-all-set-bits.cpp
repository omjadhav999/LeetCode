class Solution {
public:
    int smallestNumber(int n) {
        while(n & (n+1)){
            n = n | (n+1);
        }

    return n;
    }
};