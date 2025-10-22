class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string> array;
        for(int i=0; i<nums.size(); i++){
            array.push_back(to_string(nums[i]));
        }

        sort(array.begin(), array.end(), [](const string &a, const string &b){
            return (b+a) < (a+b);
        });

        if(array[0] == "0") return "0";
        
        string largest = "";
        for(int i=0; i<array.size(); i++){
            largest = largest+array[i];
        }

    return largest;
    }
};
