class Solution {
public:
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(), position.end());
        int l=0, h=(position.back()-position[0])/(m-1);
        int res=1;

        while(l <= h){
            int mid = l+(h-l)/2;
            if(isPossible(position, mid, m)){
                res = mid;
                l = mid+1;
            }
            else h = mid-1;
        }

    return res;
    }

    bool isPossible(const vector<int>& arr, int dist, int balls){
        int cntBalls = 1, last = arr[0];
        for(int i=1; i<arr.size(); i++){
            if(arr[i]-last >= dist){
                cntBalls++;
                last = arr[i];
            }

            if(cntBalls >= balls) return true;
        }

    return false;
    }
};