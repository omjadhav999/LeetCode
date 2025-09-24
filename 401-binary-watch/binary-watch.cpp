class Solution {
public:
    vector<string> readBinaryWatch(int turnedOn) {
        vector<string> time;
        for(int h=0; h<12; h++){
            for(int m=0; m<60; m++){
                int hr = bitset<4>(h).count();
                int min = bitset<6>(m).count();

                if(hr+min == turnedOn){
                    time.push_back(to_string(h) + ":" + (m<10 ? "0":"") + to_string(m));
                } 
            }
        }

    return time;
    }
};