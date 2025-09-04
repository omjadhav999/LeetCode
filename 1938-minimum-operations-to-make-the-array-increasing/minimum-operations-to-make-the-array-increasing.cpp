class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n=nums.size(), idx=0, cnt=0;

        while(idx < n-1){
            int diff = nums[idx]-nums[idx+1];
            if(diff < 0){
                idx++;
            }
            else{
                nums[idx+1] = nums[idx+1] + diff+1;
                cnt = cnt + (diff+1);
                idx++;
            }
        }

    return cnt;
    }
};