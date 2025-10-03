class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> res(temperatures.size());
        stack<int> stk;

        for(int i=0; i<temperatures.size(); i++){
            while(!stk.empty() && temperatures[stk.top()] < temperatures[i]) {
                int idx = stk.top();
                stk.pop();
                res[idx] = i-idx;
            }
            stk.push(i);
        }

    return res;
    }
};
