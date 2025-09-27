class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        vector<int> mp(26, 0);
        int maxFreq=0, cntMax=0, len=tasks.size();
        
        for(char i:tasks){
            mp[i-'A']++;
            if(mp[i-'A'] > maxFreq) maxFreq = mp[i-'A'];
        }

        for(int i=0; i<26; i++){
            if(mp[i] == maxFreq) cntMax++;
        }

        int time = (maxFreq-1)*(n+1)+cntMax;
        return max(time, len);
    }
};