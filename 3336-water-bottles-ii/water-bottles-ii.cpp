class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int res=numBottles, empt=numBottles;
        while(empt >= numExchange){
            empt = empt-numExchange+1;
            res++;
            numExchange++;
        }

    return res;
    }
};