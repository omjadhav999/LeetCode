class Solution {
public:
    int miceAndCheese(vector<int>& reward1, vector<int>& reward2, int k) {
        priority_queue<int> pq;
        long long res=0;
        for(int i=0; i<reward1.size(); i++){
            pq.push(reward1[i]-reward2[i]);
            res = res+reward2[i];
        }

        while(k != 0){
            res = res+pq.top();
            pq.pop();
            k--;
        }

    return res;
    }
};