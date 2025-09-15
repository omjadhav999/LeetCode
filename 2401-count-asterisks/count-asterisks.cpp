class Solution {
public:
    int countAsterisks(string s) {
        int len=s.length(), cnt=0, cntr=0;
        
        for(int i=0; i<len; i++){
            if(s[i] == '|') cntr++;
            else if(s[i] == '*' && cntr%2 == 0) cnt++;
        }
        
    return cnt;
    }
};