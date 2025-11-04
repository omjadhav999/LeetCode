#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findXSum(vector<int>& nums, int k, int x) {
        vector<int> ans;
        for (int i = 0; i + k <= nums.size(); i++) {
            unordered_map<int, int> freq;
            for (int j = i; j < i + k; j++) freq[nums[j]]++;

            vector<pair<int, int>> items;
            for (auto it = freq.begin(); it != freq.end(); ++it)
                items.push_back({it->first, it->second});

            sort(items.begin(), items.end(), [](auto &a, auto &b) {
                return a.second == b.second ? a.first > b.first : a.second > b.second;
            });

            int x_sum = 0;
            for (int j = 0; j < items.size() && j < x; j++)
                x_sum += items[j].first * items[j].second;

            ans.push_back(x_sum);
        }
        return ans;
    }
};
