class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
       int del_cnt=0, row=strs.size(), col=strs[0].size();

       for(int i=0; i<col; i++){
        for(int j=0; j<row-1; j++){
            if(strs[j][i] > strs[j+1][i]){
                del_cnt++;
                break;
            }
        }
       }

    return del_cnt;
    }
};