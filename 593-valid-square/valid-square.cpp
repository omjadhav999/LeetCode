class Solution {
public:
    bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4) {
        vector<int> a = {
            dist(p1, p2), dist(p1, p3), dist(p1, p4), 
            dist(p2, p3), dist(p2, p4), dist(p3, p4)
        };

        sort(a.begin(), a.end());

        return (a[0]>0 &&
                a[0]==a[1] &&
                a[1]==a[2] &&
                a[2]==a[3] &&
                a[4]==a[5] &&
                a[4]>a[0]);
    }

private:
    int dist(vector<int>& x, vector<int>& y) {
        return (x[0]-y[0])*(x[0]-y[0])+(x[1]-y[1])*(x[1]-y[1]);
    }
};
