class Solution {
public:
    int nextBeautifulNumber(int n) {
        vector<int> list, cnt(10, 0);
        generate(0, cnt, list);
        sort(list.begin(), list.end());

        for(int i=0; i<list.size(); i++){
            if(list[i] > n) return list[i];
        }

    return -1;
    }

private:
    void generate(long num, vector<int>& cnt, vector<int>& list){
       if(num>0 && isBeautiful(cnt)) list.push_back((int)num);
       if(num > 1224444) return;

       for(int d=1; d<=7; d++){
        if(cnt[d] < d){
            cnt[d]++;
            generate(num*10+d, cnt, list);
            cnt[d]--;
        }
       } 
    }

    bool isBeautiful(const vector<int>& cnt){
        for(int d=1; d<=7; d++){
            if(cnt[d]!=0 && cnt[d]!=d) return false;
        }

    return true;
    }
};