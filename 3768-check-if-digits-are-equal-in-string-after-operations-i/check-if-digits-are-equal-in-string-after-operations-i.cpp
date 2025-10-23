class Solution {
public:
    bool hasSameDigits(string s) {
        int n = s.length();

        while(n > 2){
            string newbornString = "";
            for(int i=0; i<n-1; i++){
                int a = s[i]-'0';
                int b = s[i+1]-'0';
                int newDigit = (a+b)%10;
                newbornString = newbornString + to_string(newDigit);
            }
            s = newbornString;
            n = s.length(); 
        }

    return s[0] == s[1];
    }
};
