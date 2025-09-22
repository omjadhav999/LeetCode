class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int freq[101]={0}, maxF=0, f=0;
        for(int i=0; i<nums.size(); i++){
            f = f + (++freq[nums[i]] == maxF);
            if(freq[nums[i]] > maxF){
                f=1;
                maxF=freq[nums[i]];
            }
        }
    
    return f*maxF;
    }
};