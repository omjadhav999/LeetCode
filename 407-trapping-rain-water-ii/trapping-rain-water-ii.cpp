class Solution {
public:

    int trapRainWater(vector<vector<int>>& heights) {
        int vol=0;
        const int m=heights.size(), n=heights[0].size();
        vector<vector<bool>> visited(m, vector<bool>(n, false));
        vector<vector<int>> directions = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
        
        auto comp = [&](const array<int, 3>& a, const array<int, 3>& b) { return a[0] >= b[0]; };
        
        priority_queue<array<int, 3>, vector<array<int, 3>>, decltype(comp)> min_heap(comp);
        
        for(int i=0; i<n; i++){
            min_heap.push({heights[0][i], 0, i}),
            min_heap.push({heights[m-1][i], m-1, i});
            visited[0][i] = true, visited[m-1][i] = true;
        }

        for(int i=0; i<m; i++){
            min_heap.push({heights[i][0], i, 0}),
            min_heap.push({heights[i][n-1], i, n-1});
            visited[i][0] = true, visited[i][n-1] = true;
        }
            
        while(!min_heap.empty()) {
            auto [height, row, col] = min_heap.top();
            min_heap.pop();

            for(auto dir: directions) {
                int r = row+dir[0], c = col+dir[1];
                if(r>=0 && r<m && c>=0 && c<n && !visited[r][c]){
                    visited[r][c] = true;
                    if(heights[r][c] < height)
                        vol = vol + height - heights[r][c];
                    
                    min_heap.push({max(height, heights[r][c]), r, c});
                }
            }
        }

    return vol;
    }
};