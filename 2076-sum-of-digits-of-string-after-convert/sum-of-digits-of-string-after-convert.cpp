class Solution {
public:
    int getLucky(string s, int k) {
        string num = "";
        for(int i=0; i<s.size(); i++){
            num = num + to_string(s[i]-'a'+1);
        }

        while(k > 0){
            int temp = 0;
            for(int j=0; j<num.size(); j++){
                temp = temp + num[j]-'0'; 
            }
            num = to_string(temp); 
            k--;
        }

    return stoi(num); 
    }
};
