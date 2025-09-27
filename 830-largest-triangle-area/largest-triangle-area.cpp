class Solution {
public:
    double largestTriangleArea(vector<vector<int>>& points) {
        float res=0;
        for(int i=0; i<points.size()-2; i++){
            int a0=points[i][0], a1=points[i][1];
            for(int j=i+1; j<points.size()-1; j++){
                for(int k=j+1; k<points.size(); k++){
                    float area = 0.5*((points[j][0]-a0)*(points[k][1]-a1) - (points[j][1]-a1)*(points[k][0]-a0));
                    if(area < 0) area = -area;
                    res = max(res, area);
                }
            }
        }

    return res;
    }
};