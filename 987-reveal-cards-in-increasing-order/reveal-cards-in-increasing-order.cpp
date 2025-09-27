class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        sort(deck.begin(), deck.end());

        int n = deck.size();
        vector<int> res(n);
        deque<int> ind;

        for(int i=0; i<n; i++) ind.push_back(i);

        for(int i=0; i<n; i++){
            int idx = ind.front();
            ind.pop_front();
            res[idx] = deck[i];

            if(!ind.empty()){
                ind.push_back(ind.front());
                ind.pop_front();
            }
        }

    return res;
    }
};