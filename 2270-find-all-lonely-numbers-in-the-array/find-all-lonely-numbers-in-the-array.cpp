class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        unordered_map<int, int> freq;
        vector<int> res;
        for(int i=0; i<nums.size(); i++){
            freq[nums[i]]++;
        }

        for(int i=0; i<nums.size(); i++){
            int n = nums[i];

            if(freq[n]==1 && freq[n-1]==0 && freq[n+1]==0){
                res.push_back(n);
            }
        }

    return res;
    }
};