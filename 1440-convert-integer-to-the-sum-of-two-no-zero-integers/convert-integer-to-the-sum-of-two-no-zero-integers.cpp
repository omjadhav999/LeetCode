class Solution {
public:
    vector<int> getNoZeroIntegers(int n) {
        for(int i=1; i<=n; i++){
            int lft=i, rgt=n-i;

            if(!hasZeroes(lft) && !hasZeroes(rgt)){
                return {lft, rgt};
            }
        }
    
     return {-1, -1};
    }

    bool hasZeroes(int n){
        while(n>0){
            if(n%10 == 0) return true;
            n=n/10;
        }
    
    return false;
    }
};

