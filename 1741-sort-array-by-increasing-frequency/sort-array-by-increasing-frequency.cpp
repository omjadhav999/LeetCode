class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int, int> freq;
        for(int i=0; i<nums.size(); i++){
            freq[nums[i]]++;
        }

        sort(nums.begin(), nums.end(), [&](int i, int j){
            if(freq[i] != freq[j]) return freq[i]<freq[j];
            else return j<i;
        });

    return nums;
    }
};