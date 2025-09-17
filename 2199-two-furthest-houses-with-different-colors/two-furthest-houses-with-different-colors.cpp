class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int res1=INT_MIN, res2=INT_MIN;
        int n=colors.size();
        int k=1;

        while(k<n){
            if(colors[0] != colors[k]) res1 = max(res1, k);
            if(colors[k] != colors[n-1]) res2 = max(res2, n-k-1);
            k++;
        }

    return max(res1, res2); 
    }
};