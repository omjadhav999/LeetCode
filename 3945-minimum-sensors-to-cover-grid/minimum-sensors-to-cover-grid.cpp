class Solution {
public:
    int minSensors(int n, int m, int k) {
        int covers = 2*k+1;
        long long r = (n+covers-1)/covers;
        long long c = (m+covers-1)/covers;

    return (int)(r*c);
    }
};