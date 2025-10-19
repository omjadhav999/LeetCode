class Solution {
public:
    string optimalDivision(vector<int>& nums) {
        string s = to_string(nums[0]);
        if(nums.size() == 1) return s;
        if(nums.size() == 2){
            s = s+"/"+to_string(nums[1]);
            return s;
        }
        s = s+"/("+to_string(nums[1]);
        for(int i=2; i<nums.size(); i++){
            s = s+"/"+to_string(nums[i]);
        }
        s = s+")";

    return s;
    }
};