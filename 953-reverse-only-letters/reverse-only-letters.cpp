class Solution {
public:
    static bool alpha(char c) {
        if((int(c) >= 65 && int(c) <= 90) || (int(c) >= 97 && int(c) <= 122)) return true;
        else return false;
    }

    string reverseOnlyLetters(string s) {
       int i=0, l=s.length();
       while(i <= l){
        if(!alpha(s[i])) i++;
        else if (!alpha(s[l])) l--;
        else{
            swap(s[i], s[l]);
            i++;
            l--;
        }
    }
    
    return s;
    }
};