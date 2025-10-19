class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int> pq(piles.begin(), piles.end());
        int res = accumulate(piles.begin(), piles.end(), 0);

        for(int i=0; i<k; i++){
            int top = pq.top();
            pq.pop();
            int num = top/2;
            res = res-num;
            pq.push(top-num);
        }

    return res;
    }
};