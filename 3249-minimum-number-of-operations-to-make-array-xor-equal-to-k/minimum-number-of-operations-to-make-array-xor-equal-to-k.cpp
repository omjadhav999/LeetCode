class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int fnlXOR=0;
        for(int i=0; i<nums.size(); i++){
            fnlXOR = fnlXOR^nums[i];
        }

        int cnt=0;
        while(k || fnlXOR){
            if((k%2) != (fnlXOR%2)) cnt++;

            k = k/2;
            fnlXOR = fnlXOR/2;
        }

    return cnt; 
    }
};