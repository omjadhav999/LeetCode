class Solution {
public:
    int canBeTypedWords(string text, string broken) {
        int msk = 0;
        for(int i=0; i<broken.size(); i++){
            msk = msk | 1 << (broken[i]-97);
        }

        int cnt = 0;
        bool brknWrd = false;
        for(int i=0; i<=text.size(); i++){
            if(i<text.size() && text[i]>='a' && text[i]<='z' &&
                (msk & (1 << (text[i]-97))) != 0) brknWrd = true;
            
            if(i==text.size() || text[i]==' '){
                if(!brknWrd) cnt++;
                brknWrd = false;
            }
        }

    return cnt;
    }
};