class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        function<void(int, int)> quickSort = [&](int l, int r){
            if(l >= r) return;

            int pvtIdx = l+(r-l)/2, pvtVal = nums[pvtIdx];
            int i = l-1, j = r+1;

            while(i < j){
                do{
                    i++;
                } while(nums[i] < pvtVal);

                do{
                    j--;
                } while(nums[j] > pvtVal);

                if(i < j) swap(nums[i], nums[j]);
            }
            
            quickSort(l, j);
            quickSort(j+1, r);
        };

        quickSort(0, nums.size()-1);

    return nums;
    }
};