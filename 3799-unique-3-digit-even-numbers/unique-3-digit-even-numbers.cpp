class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        unordered_set<int> res;
        
        for(int i=0; i<digits.size(); i++){
            for(int j=0; j<digits.size(); j++){
                for(int k=0; k<digits.size(); k++){
                    if(i!=j && i!=k && j!=k){
                        if(digits[i] != 0){
                            if(digits[k]%2 == 0){
                                int num = digits[i]*100 + digits[j]*10 + digits[k];
                                res.insert(num);
                            }
                        }
                    }
                }
            }
        }

    return res.size();
    }
};